cmake_minimum_required(VERSION 3.30)
project(OneCardGraphic)

set(CMAKE_CXX_STANDARD 20)

add_executable(OneCardGraphic window.cpp
        clock.cpp
        image.cpp
        text.cpp
        vector_image.cpp
        enum_draw_test.cpp)

# SFML 찾기
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# SFML 라이브러리 링크
target_link_libraries(OneCardGraphic sfml-graphics sfml-window sfml-system)