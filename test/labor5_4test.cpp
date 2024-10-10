#include "../labor5_4.hpp"
#include <gtest/gtest.h>
#include <cmath>

double S0(int N);
TEST(S0Test, HandlesPositiveInput) {
    EXPECT_NEAR(S0(1), 3.778, 0.001);  
    EXPECT_NEAR(S0(5), 2.494, 0.001);  
    EXPECT_NEAR(S0(10), 1.712, 0.001); 
}

TEST(S0Test, HandlesEdgeCases) {
    EXPECT_NEAR(S0(22), 1.0, 0.001);   
    EXPECT_NEAR(S0(23), 0.0, 0.001);  
}