#include "../hello_shared.h"
#include "gtest/gtest.h"

TEST(SampleTest, TestGetSharedText) {
  ASSERT_EQ("world", GetSharedText());
}

TEST(SampleTest, TestGetSharedNumber) {
  ASSERT_EQ(0, GetSharedNumber());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

