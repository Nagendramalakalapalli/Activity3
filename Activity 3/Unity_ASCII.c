/**
 * @file Unity_ASCII.c
 * @author Malakalapalli Nagendra
 * @brief Unity testing for ASCII values
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "unity.h"
#include "unity_internals.h"
#include "ASCII.h"

int len=10;
char name[10]="NAGENDRA";
SUM(len,name);
void setUp(){}
void tearDown(){}

void test_ASCII(void)
{
    TEST_ASSERT_EQUAL(208,SUM(10,"NAGENDRA"));
}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_ASCII);

  return UNITY_END();
}