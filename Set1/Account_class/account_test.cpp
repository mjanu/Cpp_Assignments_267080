#include "account.h"
#include "account.cpp"
#include <gtest/gtest.h>

TEST(BalanceTest, PositiveNos) 
    { 
      Account a1;
      ASSERT_EQ(0.00, a1.getBalance());
    
    }


int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
