#include <gtest/gtest.h>
#include <exponent/exponent.h>

TEST(ExponentTest, calculate)
{
    auto result = CalculateExponent(5, 2);
    ASSERT_TRUE(result == 25);
}

TEST(NegativeBaseTest, calculate)
{
    auto result = CalculateExponent(-5, 2);
    ASSERT_TRUE(result == 25);
}

TEST(ZeorPowerTest, calculate)
{
    auto result = CalculateExponent(5, 0);
    ASSERT_TRUE(result == 1);
}
TEST(NegativePowerTest, calculate)
{
    auto result = CalculateExponent(5, 3);
    ASSERT_TRUE(result == 125);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}