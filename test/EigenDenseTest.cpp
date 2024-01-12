#include <gtest/gtest.h>

#include <Eigen/Dense>
#include <iostream>
#include <sstream>

TEST(hello, world) { EXPECT_TRUE(true); }

TEST(EigenDenseTest, FirstProgram) {
  // Reference: https://eigen.tuxfamily.org/dox/GettingStarted.html
  using Eigen::MatrixXd;

  // MatrixXd: Matrix of doubles(d) with dynamic-size(X)
  MatrixXd m(2, 2);
  m(0, 0) = 3;
  m(1, 0) = 2.5;
  m(0, 1) = -1;
  m(1, 1) = m(1, 0) + m(0, 1);

  // member access: row, column
  EXPECT_EQ(m(1, 1), 1.5);

  // pretty print
  std::stringstream ss;
  ss << m;
  std::string expected_output = "  3  -1\n2.5 1.5";
  EXPECT_EQ(ss.str(), expected_output);
}

TEST(EigenDenseTest, MatrixVectorMultiplication_SizeSetAtRunTime) {
  // Reference: https://eigen.tuxfamily.org/dox/GettingStarted.html
  using Eigen::MatrixXd;
  using Eigen::VectorXd;

  // Random() : uniform distribution in the range [-1, 1] (floating point) or
  // their whole defenition range (integer)
  MatrixXd m = MatrixXd::Random(3, 3);
  m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;

  // VectorXd: Vector of doubles(d) with dynamic-size(X)
  VectorXd v(3);
  v << 1, 2, 3;

  VectorXd w = m * v;

  // pretty print
  std::stringstream ss;
  ss << w;
  std::string expected_output = "404.274\n512.237\n261.153";
  EXPECT_EQ(ss.str(), expected_output);
}

TEST(EigenDenseTest, MatrixVectorMultiplication_SizeSetAtCompileTime) {
  // Reference: https://eigen.tuxfamily.org/dox/GettingStarted.html
  using Eigen::Matrix3d;
  using Eigen::Vector3d;

  // Random() : uniform distribution in the range [-1, 1] (floating point) or
  // their whole defenition range (integer)
  // Matrix3d: Matrix of doubles(d) with size 3x3
  Matrix3d m = Matrix3d::Random();
  m = (m + Matrix3d::Constant(1.2)) * 50;

  // Vector3d: Vector of doubles(d) with size 3
  Vector3d v(1, 2, 3);

  Vector3d w = m * v;

  // pretty print
  std::stringstream ss;
  ss << w;
  std::string expected_output = "404.274\n512.237\n261.153";
  EXPECT_EQ(ss.str(), expected_output);
}