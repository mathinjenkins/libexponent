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

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}