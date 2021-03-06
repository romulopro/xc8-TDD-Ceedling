/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#define UNITY_EXCLUDE_SETJMP_H
#endif /* UNITY_EXCLUDE_SETJMP_H */
#ifndef UNITY_EXCLUDE_MATH_H
#define UNITY_EXCLUDE_MATH_H
#endif /* UNITY_EXCLUDE_MATH_H */
#ifndef UNITY_EXCLUDE_FLOAT
#define UNITY_EXCLUDE_FLOAT
#endif /* UNITY_EXCLUDE_FLOAT */

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A0(void);
extern void test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A1(void);
extern void test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A2(void);
extern void test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A4(void);
extern void test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A0(void);
extern void test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A1(void);
extern void test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A2(void);
extern void test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A4(void);
extern void test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_B4(void);
extern void test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_B4(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_gpio_access.c");
  run_test(test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A0, "test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A0", 22);
  run_test(test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A1, "test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A1", 28);
  run_test(test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A2, "test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A2", 34);
  run_test(test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A4, "test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_A4", 40);
  run_test(test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A0, "test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A0", 48);
  run_test(test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A1, "test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A1", 58);
  run_test(test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A2, "test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A2", 68);
  run_test(test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A4, "test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_A4", 79);
  run_test(test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_B4, "test_GPIO_SetBit_should_set_corresponding_SFR_bit_for_B4", 90);
  run_test(test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_B4, "test_GPIO_ClearBit_should_clear_the_corresponding_SFR_bit_for_B4", 97);

  return UnityEnd();
}
