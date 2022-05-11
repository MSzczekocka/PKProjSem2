cmake_minimum_required(VERSION 3.20)
project(pkMSzczekocka)

set(CMAKE_CXX_STANDARD 14)

add_executable(pkMSzczekocka main.cpp Liczba.h Re.h Nu.h Pr.h PrzeplywBurzliwy.h Przeplyw.h PrzeplywLaminarny.h)
