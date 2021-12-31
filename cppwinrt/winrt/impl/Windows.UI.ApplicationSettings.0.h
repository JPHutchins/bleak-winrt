// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.211028.7

#pragma once
#ifndef WINRT_Windows_UI_ApplicationSettings_0_H
#define WINRT_Windows_UI_ApplicationSettings_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
    struct WebAccount;
    struct WebAccountProvider;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    struct IUICommand;
    struct UICommandInvokedHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI::ApplicationSettings
{
    enum class SupportedWebAccountActions : uint32_t
    {
        None = 0,
        Reconnect = 0x1,
        Remove = 0x2,
        ViewDetails = 0x4,
        Manage = 0x8,
        More = 0x10,
    };
    enum class WebAccountAction : int32_t
    {
        Reconnect = 0,
        Remove = 1,
        ViewDetails = 2,
        Manage = 3,
        More = 4,
    };
    struct IAccountsSettingsPane;
    struct IAccountsSettingsPaneCommandsRequestedEventArgs;
    struct IAccountsSettingsPaneCommandsRequestedEventArgs2;
    struct IAccountsSettingsPaneEventDeferral;
    struct IAccountsSettingsPaneStatics;
    struct IAccountsSettingsPaneStatics2;
    struct IAccountsSettingsPaneStatics3;
    struct ICredentialCommand;
    struct ICredentialCommandFactory;
    struct ISettingsCommandFactory;
    struct ISettingsCommandStatics;
    struct IWebAccountCommand;
    struct IWebAccountCommandFactory;
    struct IWebAccountInvokedArgs;
    struct IWebAccountProviderCommand;
    struct IWebAccountProviderCommandFactory;
    struct AccountsSettingsPane;
    struct AccountsSettingsPaneCommandsRequestedEventArgs;
    struct AccountsSettingsPaneEventDeferral;
    struct CredentialCommand;
    struct SettingsCommand;
    struct WebAccountCommand;
    struct WebAccountInvokedArgs;
    struct WebAccountProviderCommand;
    struct CredentialCommandCredentialDeletedHandler;
    struct WebAccountCommandInvokedHandler;
    struct WebAccountProviderCommandInvokedHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::ICredentialCommand>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::CredentialCommand>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::SettingsCommand>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::WebAccountCommand>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::SupportedWebAccountActions>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::WebAccountAction>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane> = L"Windows.UI.ApplicationSettings.AccountsSettingsPane";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral> = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::CredentialCommand> = L"Windows.UI.ApplicationSettings.CredentialCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::SettingsCommand> = L"Windows.UI.ApplicationSettings.SettingsCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::WebAccountCommand> = L"Windows.UI.ApplicationSettings.WebAccountCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs> = L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand> = L"Windows.UI.ApplicationSettings.WebAccountProviderCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::SupportedWebAccountActions> = L"Windows.UI.ApplicationSettings.SupportedWebAccountActions";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::WebAccountAction> = L"Windows.UI.ApplicationSettings.WebAccountAction";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPane";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3> = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::ICredentialCommand> = L"Windows.UI.ApplicationSettings.ICredentialCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory> = L"Windows.UI.ApplicationSettings.ICredentialCommandFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory> = L"Windows.UI.ApplicationSettings.ISettingsCommandFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics> = L"Windows.UI.ApplicationSettings.ISettingsCommandStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand> = L"Windows.UI.ApplicationSettings.IWebAccountCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory> = L"Windows.UI.ApplicationSettings.IWebAccountCommandFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> = L"Windows.UI.ApplicationSettings.IWebAccountInvokedArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand> = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler> = L"Windows.UI.ApplicationSettings.CredentialCommandCredentialDeletedHandler";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler> = L"Windows.UI.ApplicationSettings.WebAccountCommandInvokedHandler";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler> = L"Windows.UI.ApplicationSettings.WebAccountProviderCommandInvokedHandler";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane>{ 0x81EA942C,0x4F09,0x4406,{ 0xA5,0x38,0x83,0x8D,0x9B,0x14,0xB7,0xE6 } }; // 81EA942C-4F09-4406-A538-838D9B14B7E6
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>{ 0x3B68C099,0xDB19,0x45D0,{ 0x9A,0xBF,0x95,0xD3,0x77,0x3C,0x93,0x30 } }; // 3B68C099-DB19-45D0-9ABF-95D3773C9330
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>{ 0x362F7BAD,0x4E37,0x4967,{ 0x8C,0x40,0xE7,0x8E,0xE7,0xA1,0xE5,0xBB } }; // 362F7BAD-4E37-4967-8C40-E78EE7A1E5BB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>{ 0xCBF25D3F,0xE5BA,0x40EF,{ 0x93,0xDA,0x65,0xE0,0x96,0xE5,0xFB,0x04 } }; // CBF25D3F-E5BA-40EF-93DA-65E096E5FB04
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>{ 0x561F8B60,0xB0EC,0x4150,{ 0xA8,0xDC,0x20,0x8E,0xE4,0x4B,0x06,0x8A } }; // 561F8B60-B0EC-4150-A8DC-208EE44B068A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>{ 0xD21DF7C2,0xCE0D,0x484F,{ 0xB8,0xE8,0xE8,0x23,0xC2,0x15,0x76,0x5E } }; // D21DF7C2-CE0D-484F-B8E8-E823C215765E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>{ 0x08410458,0xA2BA,0x4C6F,{ 0xB4,0xAC,0x48,0xF5,0x14,0x33,0x12,0x16 } }; // 08410458-A2BA-4C6F-B4AC-48F514331216
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::ICredentialCommand>{ 0xA5F665E6,0x6143,0x4A7A,{ 0xA9,0x71,0xB0,0x17,0xBA,0x97,0x8C,0xE2 } }; // A5F665E6-6143-4A7A-A971-B017BA978CE2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory>{ 0x27E88C17,0xBC3E,0x4B80,{ 0x94,0x95,0x4E,0xD7,0x20,0xE4,0x8A,0x91 } }; // 27E88C17-BC3E-4B80-9495-4ED720E48A91
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory>{ 0x68E15B33,0x1C83,0x433A,{ 0xAA,0x5A,0xCE,0xEE,0xA5,0xBD,0x47,0x64 } }; // 68E15B33-1C83-433A-AA5A-CEEEA5BD4764
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics>{ 0x749AE954,0x2F69,0x4B17,{ 0x8A,0xBA,0xD0,0x5C,0xE5,0x77,0x8E,0x46 } }; // 749AE954-2F69-4B17-8ABA-D05CE5778E46
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand>{ 0xCAA39398,0x9CFA,0x4246,{ 0xB0,0xC4,0xA9,0x13,0xA3,0x89,0x65,0x41 } }; // CAA39398-9CFA-4246-B0C4-A913A3896541
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory>{ 0xBFA6CDFF,0x2F2D,0x42F5,{ 0x81,0xDE,0x1D,0x56,0xBA,0xFC,0x49,0x6D } }; // BFA6CDFF-2F2D-42F5-81DE-1D56BAFC496D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>{ 0xE7ABCC40,0xA1D8,0x4C5D,{ 0x9A,0x7F,0x1D,0x34,0xB2,0xF9,0x0A,0xD2 } }; // E7ABCC40-A1D8-4C5D-9A7F-1D34B2F90AD2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand>{ 0xD69BDD9A,0xA0A6,0x4E9B,{ 0x88,0xDC,0xC7,0x1E,0x75,0x7A,0x35,0x01 } }; // D69BDD9A-A0A6-4E9B-88DC-C71E757A3501
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>{ 0xD5658A1B,0xB176,0x4776,{ 0x84,0x69,0xA9,0xD3,0xFF,0x0B,0x3F,0x59 } }; // D5658A1B-B176-4776-8469-A9D3FF0B3F59
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>{ 0x61C0E185,0x0977,0x4678,{ 0xB4,0xE2,0x98,0x72,0x7A,0xFB,0xEE,0xD9 } }; // 61C0E185-0977-4678-B4E2-98727AFBEED9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>{ 0x1EE6E459,0x1705,0x4A9A,{ 0xB5,0x99,0xA0,0xC3,0xD6,0x92,0x19,0x73 } }; // 1EE6E459-1705-4A9A-B599-A0C3D6921973
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>{ 0xB7DE5527,0x4C8F,0x42DD,{ 0x84,0xDA,0x5E,0xC4,0x93,0xAB,0xDB,0x9A } }; // B7DE5527-4C8F-42DD-84DA-5EC493ABDB9A
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane>{ using type = winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>{ using type = winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>{ using type = winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::CredentialCommand>{ using type = winrt::Windows::UI::ApplicationSettings::ICredentialCommand; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::SettingsCommand>{ using type = winrt::Windows::UI::Popups::IUICommand; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::WebAccountCommand>{ using type = winrt::Windows::UI::ApplicationSettings::IWebAccountCommand; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs>{ using type = winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs; };
    template <> struct default_interface<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand>{ using type = winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand; };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AccountCommandsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountCommandsRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccountProviderCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_WebAccountCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_CredentialCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_Commands(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeaderText(void**) noexcept = 0;
            virtual int32_t __stdcall put_HeaderText(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall Show() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowManageAccountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAccountAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowManageAccountsForUserAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAccountForUserAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PasswordCredential(void**) noexcept = 0;
            virtual int32_t __stdcall get_CredentialDeleted(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCredentialCommand(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCredentialCommandWithHandler(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSettingsCommand(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccountsCommand(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invoked(void**) noexcept = 0;
            virtual int32_t __stdcall get_Actions(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWebAccountCommand(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccountProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invoked(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWebAccountProviderCommand(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane
    {
        WINRT_IMPL_AUTO(winrt::event_token) AccountCommandsRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane, winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const;
        using AccountCommandsRequested_revoker = impl::event_revoker<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane, &impl::abi_t<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane>::remove_AccountCommandsRequested>;
        [[nodiscard]] AccountCommandsRequested_revoker AccountCommandsRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane, winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AccountCommandsRequested(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand>) WebAccountProviderCommands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::ApplicationSettings::WebAccountCommand>) WebAccountCommands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::ApplicationSettings::CredentialCommand>) CredentialCommands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::ApplicationSettings::SettingsCommand>) Commands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HeaderText() const;
        WINRT_IMPL_AUTO(void) HeaderText(param::hstring const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::User) User() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane) GetForCurrentView() const;
        WINRT_IMPL_AUTO(void) Show() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowManageAccountsAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAddAccountAsync() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowManageAccountsForUserAsync(winrt::Windows::System::User const& user) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ShowAddAccountForUserAsync(winrt::Windows::System::User const& user) const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics3>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ICredentialCommand
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Security::Credentials::PasswordCredential) PasswordCredential() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler) CredentialDeleted() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::ICredentialCommand>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::CredentialCommand) CreateCredentialCommand(winrt::Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::CredentialCommand) CreateCredentialCommandWithHandler(winrt::Windows::Security::Credentials::PasswordCredential const& passwordCredential, winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::SettingsCommand) CreateSettingsCommand(winrt::Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, winrt::Windows::UI::Popups::UICommandInvokedHandler const& handler) const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::SettingsCommand) AccountsCommand() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountCommand
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Security::Credentials::WebAccount) WebAccount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler) Invoked() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::SupportedWebAccountActions) Actions() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::WebAccountCommand) CreateWebAccountCommand(winrt::Windows::Security::Credentials::WebAccount const& webAccount, winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, winrt::Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::WebAccountAction) Action() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Security::Credentials::WebAccountProvider) WebAccountProvider() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler) Invoked() const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand) CreateWebAccountProviderCommand(winrt::Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) const;
    };
    template <> struct consume<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory<D>;
    };
}
#endif
