//#include "header.h"
//#include "unity.h"
//#define PROJECT_NAME    "Assessment platform"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

#include "../inc/header.h"


/* Prototypes for all the test functions */
int score_pos(int s1);
int score_neg(int s2);



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_score_pos()
{
    TEST_ASSERT_EQUAL(8, score_pos(4));
 
}
void test_score_neg()
{
    TEST_ASSERT_EQUAL(3, score_neg(4));
 
}


/* Start of the application test */
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_score_pos);
  RUN_TEST(test_score_neg);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */



