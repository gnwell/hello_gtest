#include <stdio.h>
#include "gtest/gtest.h"

TEST(HelloTest, case1){
  //ASSERT_EQ(1, 1);
  int* a = nullptr;
  *a = 3;
  EXPECT_EQ(1, 1);
}

TEST(HelloTest, case2) {
  EXPECT_EQ(1, 1);
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}