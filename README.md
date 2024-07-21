# Zx32
Win32 API UTF8 Wrapper

## Build
- xmake
```shell
> git clone --depth 1 https://github.com/Dir-A/Wx32.git
> cd Wx32

-- build static --
> xmake config -k static
> xmake build -y
> xmake install -o out_dir_static wx32

-- build shared --
> xmake config -k shared
> xmake build -y
> xmake install -o out_dir_shared wx32
```

## Quick Start
- xmake
```shell
> xmake create -l c++ -t console hello_wx32
```

modify `hello_wx32/xmake.lua`
```lua
add_repositories("Drepo https://github.com/Dir-A/Drepo.git") -- add
add_requires("wx32") -- add
set_languages("c++20") -- add
set_encodings("utf-8") -- add

add_rules("mode.debug", "mode.release")

target("hello_wx32")
    add_packages("wx32") -- add
    set_kind("binary")
    add_files("src/*.cpp")
```
modify `hello_wx32/src/main.cpp`
```c++
#include <Wx32/APIs.h>

auto main() -> int
{
    Wx32::API::MessageBoxU8(nullptr, "wx32😋", "hello🥳", MB_OK);
}
```
build and run
```shell
> xmake build -y
> xmake run
```
