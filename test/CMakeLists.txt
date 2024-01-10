find_package(Eigen3 REQUIRED)
set(EIGEN_INCLUDE_DIR ${EIGEN3_INCLUDE_DIR})

add_library(EigenMinimumTest SHARED foo.cpp)
target_include_directories(EigenMinimumTest PUBLIC ${EIGEN_INCLUDE_DIR})
set_normal_compile_options(EigenMinimumTest)