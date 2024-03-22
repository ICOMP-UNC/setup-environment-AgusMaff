#include "../include/logic.h"

void setUp(void){}

void tearDown(void){}

void test_logic_add(void){
    TEST_ASSERT_EQUAL(5, add(2,3));
    TEST_ASSERT_NOT_EQUAL(5, add(2,2));
}

void test_logic_substract(void){
    TEST_ASSERT_EQUAL(5, substract(10,5));
    TEST_ASSERT_NOT_EQUAL(1, substract(2,2));
}

void test_logic_multiply(void){
    TEST_ASSERT_EQUAL(50, multiply(10,5));
    TEST_ASSERT_NOT_EQUAL(0, multiply(2,2));
}

void test_logic_divide(void){
    TEST_ASSERT_EQUAL(2, divide(10,5));
    TEST_ASSERT_NOT_EQUAL(0, divide(2,2));
    TEST_ASSERT_EQUAL(-1, divide(2,0));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}