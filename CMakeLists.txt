# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# set(CMAKE_TOOLCHAIN_FILE "C:/Users/Win/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")

project ("CMakeProject1")

# set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
# vcpkg integrate install



include(FetchContent)
FetchContent_Declare(zlib GIT_REPOSITORY https://github.com/madler/zlib.git GIT_TAG master)
FetchContent_MakeAvailable(zlib)
include_directories(${zlib_SOURCE_DIR})
#find_package(ZLIB REQUIRED)
set(ZLIB_INCLUDE_DIRS ${zlib_SOURCE_DIR})
set(ZLIB_LIBRARY zlibstatic CACHE STRING "")
set(ZLIB_LIBRARIES ${ZLIB_LIBRARY})
set(ZLIB_FOUND 1)
add_library(ZLIB::ZLIB ALIAS zlibstatic)  # required for CMake > 3.4


#FetchContent_Declare(curl GIT_REPOSITORY https://github.com/jpbarrette/curlpp.git GIT_TAG master)
FetchContent_Declare(curl GIT_REPOSITORY https://github.com/curl/curl.git GIT_TAG master)
FetchContent_MakeAvailable(curl)
include_directories(${curl_SOURCE_DIR})


# find_package(fmt CONFIG REQUIRED) 

# add_executable(HelloWorld helloworld.cpp)
# target_link_libraries(HelloWorld PRIVATE fmt::fmt)

# find_package(curl REQUIRED)
# Add source to this project's executable.
add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")
# target_link_libraries(CMakeProject1 PRIVATE fmt::fmt)


# TODO: Add tests and install targets if needed.
