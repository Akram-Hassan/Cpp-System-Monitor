#include <string>

#include <format.h>
#include <gtest/gtest.h>

TEST(FormatTest, BasicAssertions) {
  EXPECT_STREQ(Format::ElapsedTime(20).c_str(), "this is test string!");
}