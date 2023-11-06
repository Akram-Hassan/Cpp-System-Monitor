#include <string>

#include <format.h>
#include <gtest/gtest.h>

TEST(FormatTest, BasicAssertions) {
  EXPECT_STREQ(Format::ElapsedTime(20).c_str(), "00:00:20");
  EXPECT_STREQ(Format::ElapsedTime(59).c_str(), "00:00:59");
  EXPECT_STREQ(Format::ElapsedTime(60).c_str(), "00:01:00");
  EXPECT_STREQ(Format::ElapsedTime(65).c_str(), "00:01:05");

  EXPECT_STREQ(Format::ElapsedTime(3540).c_str(), "00:59:00");
  EXPECT_STREQ(Format::ElapsedTime(3600).c_str(), "01:00:00");
  EXPECT_STREQ(Format::ElapsedTime(3601).c_str(), "01:00:01");
  EXPECT_STREQ(Format::ElapsedTime(3724).c_str(), "01:02:04");
  
  EXPECT_STREQ(Format::ElapsedTime(10803).c_str(), "03:00:03");
  EXPECT_STREQ(Format::ElapsedTime(13627).c_str(), "03:47:07");
}