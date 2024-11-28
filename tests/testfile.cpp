
 #include <gtest/gtest.h>
 #include <cmath>

#include "/Users/tarasneridnyi/Desktop/Lab9_1/src/dod.cpp"
#include "/Users/tarasneridnyi/Desktop/Lab9_1/src/sum.cpp"
#include "/Users/tarasneridnyi/Desktop/Lab9_1/src/var.cpp"


using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

// Тест функції dod (рекурентний доданок)


// Тест функції sum (сума ряду)
TEST(TEST2, TestingSum) {
    x = 1.0;
    e = 1e-6;
    sum();
    EXPECT_NEAR(s, exp(x * x), 1e-6);

    x = 0.5;
    sum();
    EXPECT_NEAR(s, exp(x * x), 1e-6);
}

// Тест роботи основного циклу


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
