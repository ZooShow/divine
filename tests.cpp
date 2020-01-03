#include "gtest/gtest.h"
#include "lib.h"
using namespace std;

TEST(divine, expectNum){
    double mas_one [2]{
        12, 5
    };
    double mas_two[2]{
        89, 125
    };
    double mas_three[2]{
        0, 5
    };
    double mas_four[2]{
        5, 5
    };
    double div;
    div = (divine(mas_one));
    EXPECT_EQ(2.4, div);
    div = (divine(mas_two));
    EXPECT_EQ(0.712, div);
    div = (divine(mas_three));
    EXPECT_EQ(0, div);
    div = (divine(mas_four));
    EXPECT_EQ(1, div);
}

TEST(divine, expectErr){
    double mas[2]{
        12, 0
    };
    EXPECT_THROW((divine(mas)), runtime_error);

}

TEST(readFile, expectMas){
    double *mas = readFile(1);
    EXPECT_EQ(123, mas[0]);
    EXPECT_EQ(2, mas[1]);
}

TEST(readFile, expectErr){
    EXPECT_THROW(readFile(2), invalid_argument);
    EXPECT_THROW(readFile(3), range_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}