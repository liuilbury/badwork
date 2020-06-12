cmake_minimum_required(VERSION 3.16)
project(CssParser)
set(CMAKE_CXX_STANDARD 11)
add_executable(autoCss main.cpp CSSLex.cpp CSSLex.h error.h error.cpp CSSParse.cpp CSSParse.h CSSToken.cpp CSSToken.h)