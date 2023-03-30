
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 20)

project ("Aufgabe_1")

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (A1_Main "main.cpp" "A1.h" "A1.cpp")
add_executable (A1_test "test.cpp" "A1.h" "A1.cpp" "catch.hpp")

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
