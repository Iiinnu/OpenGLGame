#include "pch.h"
#include "../Maths/Vector3.h"

TEST(Vector3_Constructor, AssignsAllComponents) {
    Vector3 v(3, 4, 5);
    EXPECT_EQ(v.x, 3);
    EXPECT_EQ(v.y, 4);
    EXPECT_EQ(v.z, 5);
}

TEST(Vector3_EqualityComparison, Returns_True_For_Equal_Vectors) {
    EXPECT_TRUE(Vector3(3, 4, 5) == Vector3(3, 4, 5));
}

// test and implement inequality comparison
// Unit Tests
// Test-Driven Development (First write the test, then the function, then clean up your code)
TEST(Vector3_EqualityComparison, Returns_False_For_Inequal_Vectors) {
    EXPECT_TRUE(Vector3(3, 4, 5) != Vector3(2, 4, 5));
    EXPECT_TRUE(Vector3(3, 4, 5) != Vector3(3, 2, 5));
    EXPECT_TRUE(Vector3(3, 4, 5) != Vector3(3, 4, 2));
    EXPECT_TRUE(Vector3(3, 4, 5) != Vector3(2, 2, 2));
}

TEST(Vector3_Negate, InvertPositiveValues) {
    EXPECT_EQ(-Vector3(3, 4, 5), Vector3(-3, -4, -5));
}

TEST(Vector3_Scalar_Multiplication, ScalesAllValues) {
    EXPECT_EQ(Vector3(3, 4, 5)*2, Vector3(6, 8, 10));
}