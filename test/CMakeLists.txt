include(${CMAKE_SCRIPTS_DIR}/install_gtest.cmake)

find_package(Eigen3 REQUIRED)
set(EIGEN_INCLUDE_DIR ${EIGEN3_INCLUDE_DIR})

add_executable(EigenMinimumTest foo.cpp)
target_include_directories(EigenMinimumTest PUBLIC ${EIGEN_INCLUDE_DIR})
set_normal_compile_options(EigenMinimumTest)
enable_gtest(EigenMinimumTest)