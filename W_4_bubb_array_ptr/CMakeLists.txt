# CMakeList.txt: CMake-Projekt für "Taschenrechner". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)

project ("bubblesort")

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (Bubblesort "main.cpp" "BS.cpp" "BS.hpp")

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
