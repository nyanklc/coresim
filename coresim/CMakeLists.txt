# CMakeList.txt : CMake project for coresim, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (coresim "coresim.c" "coresim.h" "particles/electron.c" "math/number.h" "math/number.c" "particles/electron.h" "math/vector.h" "math/vector.c")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET coresim PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
