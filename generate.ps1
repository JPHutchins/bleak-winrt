param ([switch]$skipNugetInstall)

$pywinrt_version = '1.0.0-beta.7'
$cppwinrt_version = '2.0.220608.4'
$windows_sdk_version = '10.0.22621.0'
$repoRootPath = (Get-Item $PSScriptRoot).FullName
$nugetPath = "$repoRootPath\_nuget"
$projectionPath = "$PSScriptRoot"

if (!$skipNugetInstall) {
    nuget install PyWinRT -Version $pywinrt_version -Prerelease -NoCache -ExcludeVersion -OutputDirectory "$nugetPath"
    nuget install Microsoft.Windows.CppWinRT -Version $cppwinrt_version -ExcludeVersion -OutputDirectory "$nugetPath"
}

$pywinrt_exe = "$nugetPath\PyWinRT\bin\pywinrt.exe"
$cppwinrt_exe = "$nugetPath\Microsoft.Windows.CppWinRT\bin\cppwinrt.exe"

$cppwinrt_path = "$projectionPath\cppwinrt"
$pywinrt_path = "$projectionPath\pywinrt"

Remove-Item $cppwinrt_path -Recurse -Force -ErrorAction SilentlyContinue
Remove-Item $pywinrt_path -Recurse -Force -ErrorAction SilentlyContinue

$pyinclude = "Windows.Foundation", "Windows.Storage.Streams", "Windows.Devices.Bluetooth", "Windows.Devices.Enumeration"
$pyexclude = "Windows.Foundation.Diagnostics", "Windows.Foundation.Metadata", "Windows.Foundation.Numerics", "Windows.Devices.Bluetooth.Rfcomm", "Windows.Devices.Enumeration.Pnp"

$pyin = $pyinclude | ForEach-Object { "-include", "$_" }
$pyout = $pyexclude | ForEach-Object { "-exclude", "$_" }

# FIXME: -include and -exclude don't seem to work for cppwinrt.exe
# it would be nice to only generate required files
& $cppwinrt_exe -input $windows_sdk_version -output $cppwinrt_path

$pyparams = ("-module", "bleak_winrt", "-input", $windows_sdk_version, "-output", $pywinrt_path, "-verbose") + $pyin + $pyout
& $pywinrt_exe $pyparams
