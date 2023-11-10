#include <string>
#include <system.h>

#include <linux_parser.h>
#include <gtest/gtest.h>

TEST(System, Kernel) {
    EXPECT_EQ(System{}.Kernel(), LinuxParser::Kernel());
}

TEST(System, OperatingSystem) {
    EXPECT_STREQ(System{}.OperatingSystem().c_str(), LinuxParser::OperatingSystem().c_str());
}