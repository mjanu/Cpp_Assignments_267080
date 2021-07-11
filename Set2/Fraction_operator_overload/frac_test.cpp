#include "frac_oov.h"
#include "frac_oov.cpp"
#include <gtest/gtest.h>
 
TEST(FracTest, PositiveNos) 
    {
         Fraction f1(2,2);
         Fraction f2(2,2);
         ASSERT_EQ(true, f1==f2);
    }
 
TEST(Fractest1, random) 
    {
       Fraction f3{}; 
       ASSERT_EQ(true,f3.isSimplest());
    
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
