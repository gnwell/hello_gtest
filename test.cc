#include <stdio.h>
#include "gtest/gtest.h"

int Foo(){
    int *p = 0;
    *p = 42;
    return 0;
}

TEST(DeathTest, demo){
    EXPECT_DEATH(Foo(),"");
    //EXPECT_EQ(1, Foo());
    printf("DeathTest........\n");
}


TEST(GTestSample, DISABLED_demo) {
  EXPECT_EQ(1, 1);
}

// int main(int argc, char* argv[]) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }