find_package(Eigen3 REQUIRED)

add_library(${PROJECT_NAME} SHARED foo.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${EIGEN3_INCLUDE_DIR})
