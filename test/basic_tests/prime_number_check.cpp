//
// Created by Chohee Kim on 7/15/16.
//

#include "gtest/gtest.h"
#include "PrimeNumber.h"
#include "logger.hpp"
TEST(primenumber_tests, validnumber) {

  EXPECT_EQ(5, PrimeNumber(3));
  EXPECT_EQ(17, PrimeNumber(7));
  EXPECT_EQ(31, PrimeNumber(11));
  Logger::getInstance().logScore("Prime numbers", 10, 15);
}


TEST(primenumber_tests, invalidnumber) {

  EXPECT_EQ(-1, PrimeNumber(0));
  EXPECT_EQ(-1, PrimeNumber(-2));
  Logger::getInstance().logScore("Prime for negative numbers", 20, 20);
}
