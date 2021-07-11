#include<gtest/gtest.h>
#include"employee.cpp"
#include"manager.h"
#include"trainee.h"
#include"engineer.h"

TEST(Engineer,Test1)
{
    Engineer e1("engg","Niranjan", 2516, 161, 39);
    e1.appraisal(500);
    EXPECT_EQ(3016,e1.payroll());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
