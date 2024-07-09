#include <Zx32/Private/WxUser32.h>


namespace Zx32::User32
{
    auto SetWindowTextU8(const std::string_view u8Text, WndID hWnd) -> bool
    {
        return ::SetWindowTextW(hWnd, Utils::ApiStrCvt(u8Text).first.data()) != FALSE;
    }

    auto MessageBoxU8(const std::string_view u8Title, const std::string_view u8Text, size_t uType, WndID hWnd) -> size_t
    {
        return static_cast<size_t>(::MessageBoxW(hWnd, Utils::ApiStrCvt(u8Text).first.data(), Utils::ApiStrCvt(u8Title).first.data(), static_cast<UINT>(uType)));
    }
} // namespace Wx32::User32
