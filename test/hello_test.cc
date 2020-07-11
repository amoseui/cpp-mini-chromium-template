#include "gtest/gtest.h"
#include "hello_static.h"

TEST(SampleTest, TestGetStaticText) {
    ASSERT_EQ("world", GetStaticText());
}

TEST(SampleTest, TestGetStaticNumber) {
    ASSERT_EQ(1, GetStaticNumber());
}

TEST(SampleTest, TestPointer) {
    uint* test = new uint[8];
    test[0] = 1000;
    test[1] = 2000;
    delete[] test;
    test = 0;

    if (test != 0) {
        delete[] test;
        test = 0;
    }
    test = new uint[8];

    ASSERT_EQ(0, 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

