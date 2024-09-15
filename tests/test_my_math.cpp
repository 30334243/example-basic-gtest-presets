#include <gtest/gtest.h>
#include "my_math.h"

TEST(MyMathTest, Add) {
    EXPECT_EQ(MyMath::add(1, 2), 3);
    EXPECT_EQ(MyMath::add(-1, 1), 0);
    EXPECT_EQ(MyMath::add(-1, -1), -2);
}

TEST(MyMathTest, Subtract) {
    EXPECT_EQ(MyMath::subtract(10, 5), 5);
    EXPECT_EQ(MyMath::subtract(5, 10), -5);
    EXPECT_EQ(MyMath::subtract(-1, -1), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}