include(${CMAKE_SCRIPTS_DIR}/install_gtest.cmake)

find_package(Eigen3 REQUIRED)
set(EIGEN_INCLUDE_DIR ${EIGEN3_INCLUDE_DIR})

add_executable(EigenDenseTest EigenDenseTest.cpp)
target_include_directories(EigenDenseTest PUBLIC ${EIGEN_INCLUDE_DIR})
set_normal_compile_options(EigenDenseTest)
enable_gtest(EigenDenseTest)