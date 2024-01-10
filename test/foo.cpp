#include <gtest/gtest.h>

#include <Eigen/Dense>
#include <iostream>
#include <sstream>

TEST(hello, world) { EXPECT_TRUE(true); }

TEST(EigenTest, hello) {
  using Eigen::MatrixXd;

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