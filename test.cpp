/**
 * Just a very simple test program.
 * Really just here to show off how Travis CI works.
 *
 * These tests are not indicitave of how real unit tests should be written
 * or how many should be written.  It'd be better to have tests for every
 * known "corner" or "edge" case, then a bunch of tests for the general case.
 *
 * @author Taylor Mckinney, taylorsmck@gmail.com
 */

#include <iostream>
#include "gtest/gtest.h"

#include "run.cpp"

// --- plus ---

TEST (Plus, PlusTest0) {
    ASSERT_EQ(0, example::plus(0, 0));
}

TEST (Plus, PlusTest1) {
    ASSERT_EQ(1, example::plus(1, 0));
}

TEST (Plus, PlusTest2) {
    ASSERT_EQ(10, example::plus(4, 6));
}

// --- minus ---

TEST (Minus, MinusTest0) {
    ASSERT_EQ(0, example::minus(0, 0));
}

TEST(Minus, MinusTest1) {
    ASSERT_EQ(1, example::minus(1, 0));
}

TEST(Minus, MinusTest2) {
    ASSERT_EQ(5, example::minus(10, 5));
}

// --- multiply ---

TEST (Multiply, MultiplyTest0) {
    ASSERT_EQ(0, example::multiply(0, 0));
}

TEST (Multiply, MultiplyTest1) {
    ASSERT_EQ(0, example::multiply(1, 0));
}

TEST (Multiply, MultiplyTest2) {
    ASSERT_EQ(20, example::multiply(4, 5));
}

// --- divide ---

TEST (Divide, DivideTest0) {
    ASSERT_EQ(0, example::divide(0, 1));
}

TEST (Divide, DivideTest1) {
    ASSERT_EQ(1, example::divide(1, 1));
}

TEST (Divide, DivideTest2) {
    ASSERT_EQ(5, example::divide(20, 4));
}

// --- pow ---

TEST(Pow, PowTest0) {
    ASSERT_EQ(0, example::pow(0, 1));
}

TEST(Pow, PowTest1) {
    ASSERT_EQ(4, example::pow(4, 1));
}

TEST(Pow, PowTest2) {
    ASSERT_EQ(32, example::pow(2, 5));
}
