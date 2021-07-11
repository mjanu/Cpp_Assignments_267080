#include "myt_op_over.h"
#include "myt_op_over.cpp"
#include <gtest/gtest.h>

TEST(TimeTest, PositiveNos)
{
  MyTime t1(2,2,2);
  MyTime t2(2,2,2);
  ASSERT_EQ(true,t1==t2);


} 

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
