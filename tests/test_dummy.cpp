#include "gtest/gtest.h"
#include <cassert>

TEST(gtest_dummy, eq) {
    ASSERT_EQ(4, 2 + 2);
    EXPECT_EQ(4, 1 + 3);
}

TEST(gtest_dummy, ne) {
    ASSERT_NE(1, 2);
    EXPECT_NE(3, 4);
}

TEST(gtest_dummy, boolean) {
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
    EXPECT_TRUE(true);
    EXPECT_FALSE(false);
}

TEST(gtest_dummy, death) {
    ASSERT_DEATH(assert(false), "");
}