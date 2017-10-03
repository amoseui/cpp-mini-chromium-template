#include "gtest/gtest.h"
#include "main.h"
 
TEST(SampleTest, AssertionTrue) {
  ASSERT_EQ(1, 1);
}

TEST(SampleTest, TestSampleMethod) {
  ASSERT_EQ(1, test());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

