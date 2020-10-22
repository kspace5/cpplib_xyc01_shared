# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
# add_library (sample-lib sample-lib.cxx)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
# target_include_directories (sample-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

cmake_minimum_required (VERSION 3.0)
project (xyc)

# To build shared libraries in Windows, we set CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS to TRUE.
# See https://cmake.org/cmake/help/v3.4/variable/CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS.html
# See https://blog.kitware.com/create-dlls-on-windows-without-declspec-using-new-cmake-export-all-feature/
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

file(GLOB_RECURSE HEADER_FILES ./*.h)
file(GLOB_RECURSE SRC_FILES ./*.cpp)

add_library(xyc SHARED ${HEADER_FILES} ${SRC_FILES} )
target_include_directories (xyc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})