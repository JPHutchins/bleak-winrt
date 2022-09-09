// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

#pragma once
#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_0_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_0_H
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    struct IEasClientDeviceInformation;
    struct IEasClientDeviceInformation2;
    struct EasClientDeviceInformation;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation> = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2";
    template <> inline constexpr guid guid_v<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ 0x54DFD981,0x1968,0x4CA3,{ 0xB9,0x58,0xE5,0x95,0xD1,0x65,0x05,0xEB } }; // 54DFD981-1968-4CA3-B958-E595D16505EB
    template <> inline constexpr guid guid_v<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ 0xFFB35923,0xBB26,0x4D6A,{ 0x81,0xBC,0x16,0x5A,0xEE,0x0A,0xD7,0x54 } }; // FFB35923-BB26-4D6A-81BC-165AEE0AD754
    template <> struct default_interface<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ using type = winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation; };
    template <> struct abi<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_OperatingSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemManufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemProductName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemSku(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemHardwareVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemFirmwareVersion(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto OperatingSystem() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto SystemManufacturer() const;
        [[nodiscard]] auto SystemProductName() const;
        [[nodiscard]] auto SystemSku() const;
    };
    template <> struct consume<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2
    {
        [[nodiscard]] auto SystemHardwareVersion() const;
        [[nodiscard]] auto SystemFirmwareVersion() const;
    };
    template <> struct consume<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>;
    };
}
#endif
