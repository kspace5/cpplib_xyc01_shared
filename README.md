# abc_lib
Simple CMake static lib example (c++)

## Build Instructions (Windows)
md build

cd build

cmake -G "Visual Studio 15 2017 Win64" ..

Compile with Visual Studio 2017 (Add msbuild to path -> path=%path%;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin\amd64)

msbuild abc.sln /property:Configuration=Release        (or Debug)
