#include "../hello_static.h"
#include "gtest/gtest.h"

TEST(SampleTest, TestGetStaticText) {
  ASSERT_EQ("world", GetStaticText());
}

TEST(SampleTest, TestGetStaticNumber) {
  ASSERT_EQ(1, GetStaticNumber());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

