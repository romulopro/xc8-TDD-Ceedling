/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_gpio_access.h"

static const char* CMockString_GPIO_ClearBit = "GPIO_ClearBit";
static const char* CMockString_GPIO_IsBitSet = "GPIO_IsBitSet";
static const char* CMockString_GPIO_SetBit = "GPIO_SetBit";
static const char* CMockString_bit = "bit";
static const char* CMockString_port = "port";

typedef struct _CMOCK_GPIO_SetBit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int CallOrder;
  GPIO_PORTS Expected_port;
  PORT_BITS Expected_bit;
  char IgnoreArg_port;
  char IgnoreArg_bit;

} CMOCK_GPIO_SetBit_CALL_INSTANCE;

typedef struct _CMOCK_GPIO_ClearBit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int CallOrder;
  GPIO_PORTS Expected_port;
  PORT_BITS Expected_bit;
  char IgnoreArg_port;
  char IgnoreArg_bit;

} CMOCK_GPIO_ClearBit_CALL_INSTANCE;

typedef struct _CMOCK_GPIO_IsBitSet_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  bool ReturnVal;
  int CallOrder;
  GPIO_PORTS Expected_port;
  PORT_BITS Expected_bit;
  char IgnoreArg_port;
  char IgnoreArg_bit;

} CMOCK_GPIO_IsBitSet_CALL_INSTANCE;

static struct mock_gpio_accessInstance
{
  char GPIO_SetBit_IgnoreBool;
  char GPIO_SetBit_CallbackBool;
  CMOCK_GPIO_SetBit_CALLBACK GPIO_SetBit_CallbackFunctionPointer;
  int GPIO_SetBit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GPIO_SetBit_CallInstance;
  char GPIO_ClearBit_IgnoreBool;
  char GPIO_ClearBit_CallbackBool;
  CMOCK_GPIO_ClearBit_CALLBACK GPIO_ClearBit_CallbackFunctionPointer;
  int GPIO_ClearBit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GPIO_ClearBit_CallInstance;
  char GPIO_IsBitSet_IgnoreBool;
  bool GPIO_IsBitSet_FinalReturn;
  char GPIO_IsBitSet_CallbackBool;
  CMOCK_GPIO_IsBitSet_CALLBACK GPIO_IsBitSet_CallbackFunctionPointer;
  int GPIO_IsBitSet_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GPIO_IsBitSet_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_gpio_access_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.GPIO_SetBit_CallInstance;
  if (Mock.GPIO_SetBit_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GPIO_SetBit);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GPIO_SetBit_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.GPIO_ClearBit_CallInstance;
  if (Mock.GPIO_ClearBit_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GPIO_ClearBit);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GPIO_ClearBit_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.GPIO_IsBitSet_CallInstance;
  if (Mock.GPIO_IsBitSet_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GPIO_IsBitSet);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GPIO_IsBitSet_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_gpio_access_Init(void)
{
  mock_gpio_access_Destroy();
}

void mock_gpio_access_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.GPIO_SetBit_IgnoreBool = (char) 1;
  Mock.GPIO_ClearBit_IgnoreBool = (char) 1;
  Mock.GPIO_IsBitSet_IgnoreBool = (char) 1;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void GPIO_SetBit(GPIO_PORTS port, PORT_BITS bit)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GPIO_SetBit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GPIO_SetBit);
  cmock_call_instance = (CMOCK_GPIO_SetBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GPIO_SetBit_CallInstance);
  Mock.GPIO_SetBit_CallInstance = CMock_Guts_MemNext(Mock.GPIO_SetBit_CallInstance);
  if (Mock.GPIO_SetBit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.GPIO_SetBit_CallbackBool &&
      Mock.GPIO_SetBit_CallbackFunctionPointer != NULL)
  {
    Mock.GPIO_SetBit_CallbackFunctionPointer(port, bit, Mock.GPIO_SetBit_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_port)
  {
    UNITY_SET_DETAILS(CMockString_GPIO_SetBit,CMockString_port);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_port), (void*)(&port), sizeof(GPIO_PORTS), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_bit)
  {
    UNITY_SET_DETAILS(CMockString_GPIO_SetBit,CMockString_bit);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_bit), (void*)(&bit), sizeof(PORT_BITS), cmock_line, CMockStringMismatch);
  }
  }
  if (Mock.GPIO_SetBit_CallbackFunctionPointer != NULL)
  {
    Mock.GPIO_SetBit_CallbackFunctionPointer(port, bit, Mock.GPIO_SetBit_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_GPIO_SetBit(CMOCK_GPIO_SetBit_CALL_INSTANCE* cmock_call_instance, GPIO_PORTS port, PORT_BITS bit)
{
  memcpy((void*)(&cmock_call_instance->Expected_port), (void*)(&port),
         sizeof(GPIO_PORTS[sizeof(port) == sizeof(GPIO_PORTS) ? 1 : -1])); /* add GPIO_PORTS to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_port = 0;
  memcpy((void*)(&cmock_call_instance->Expected_bit), (void*)(&bit),
         sizeof(PORT_BITS[sizeof(bit) == sizeof(PORT_BITS) ? 1 : -1])); /* add PORT_BITS to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_bit = 0;
}

void GPIO_SetBit_CMockIgnore(void)
{
  Mock.GPIO_SetBit_IgnoreBool = (char)1;
}

void GPIO_SetBit_CMockStopIgnore(void)
{
  Mock.GPIO_SetBit_IgnoreBool = (char)0;
}

void GPIO_SetBit_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_SetBit_CALL_INSTANCE));
  CMOCK_GPIO_SetBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_SetBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_SetBit_CallInstance = CMock_Guts_MemChain(Mock.GPIO_SetBit_CallInstance, cmock_guts_index);
  Mock.GPIO_SetBit_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void GPIO_SetBit_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_PORTS port, PORT_BITS bit)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_SetBit_CALL_INSTANCE));
  CMOCK_GPIO_SetBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_SetBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_SetBit_CallInstance = CMock_Guts_MemChain(Mock.GPIO_SetBit_CallInstance, cmock_guts_index);
  Mock.GPIO_SetBit_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_GPIO_SetBit(cmock_call_instance, port, bit);
}

void GPIO_SetBit_AddCallback(CMOCK_GPIO_SetBit_CALLBACK Callback)
{
  Mock.GPIO_SetBit_IgnoreBool = (char)0;
  Mock.GPIO_SetBit_CallbackBool = (char)1;
  Mock.GPIO_SetBit_CallbackFunctionPointer = Callback;
}

void GPIO_SetBit_Stub(CMOCK_GPIO_SetBit_CALLBACK Callback)
{
  Mock.GPIO_SetBit_IgnoreBool = (char)0;
  Mock.GPIO_SetBit_CallbackBool = (char)0;
  Mock.GPIO_SetBit_CallbackFunctionPointer = Callback;
}

void GPIO_SetBit_CMockIgnoreArg_port(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_GPIO_SetBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_SetBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.GPIO_SetBit_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_port = 1;
}

void GPIO_SetBit_CMockIgnoreArg_bit(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_GPIO_SetBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_SetBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.GPIO_SetBit_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_bit = 1;
}

void GPIO_ClearBit(GPIO_PORTS port, PORT_BITS bit)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GPIO_ClearBit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GPIO_ClearBit);
  cmock_call_instance = (CMOCK_GPIO_ClearBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GPIO_ClearBit_CallInstance);
  Mock.GPIO_ClearBit_CallInstance = CMock_Guts_MemNext(Mock.GPIO_ClearBit_CallInstance);
  if (Mock.GPIO_ClearBit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.GPIO_ClearBit_CallbackBool &&
      Mock.GPIO_ClearBit_CallbackFunctionPointer != NULL)
  {
    Mock.GPIO_ClearBit_CallbackFunctionPointer(port, bit, Mock.GPIO_ClearBit_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_port)
  {
    UNITY_SET_DETAILS(CMockString_GPIO_ClearBit,CMockString_port);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_port), (void*)(&port), sizeof(GPIO_PORTS), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_bit)
  {
    UNITY_SET_DETAILS(CMockString_GPIO_ClearBit,CMockString_bit);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_bit), (void*)(&bit), sizeof(PORT_BITS), cmock_line, CMockStringMismatch);
  }
  }
  if (Mock.GPIO_ClearBit_CallbackFunctionPointer != NULL)
  {
    Mock.GPIO_ClearBit_CallbackFunctionPointer(port, bit, Mock.GPIO_ClearBit_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_GPIO_ClearBit(CMOCK_GPIO_ClearBit_CALL_INSTANCE* cmock_call_instance, GPIO_PORTS port, PORT_BITS bit)
{
  memcpy((void*)(&cmock_call_instance->Expected_port), (void*)(&port),
         sizeof(GPIO_PORTS[sizeof(port) == sizeof(GPIO_PORTS) ? 1 : -1])); /* add GPIO_PORTS to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_port = 0;
  memcpy((void*)(&cmock_call_instance->Expected_bit), (void*)(&bit),
         sizeof(PORT_BITS[sizeof(bit) == sizeof(PORT_BITS) ? 1 : -1])); /* add PORT_BITS to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_bit = 0;
}

void GPIO_ClearBit_CMockIgnore(void)
{
  Mock.GPIO_ClearBit_IgnoreBool = (char)1;
}

void GPIO_ClearBit_CMockStopIgnore(void)
{
  Mock.GPIO_ClearBit_IgnoreBool = (char)0;
}

void GPIO_ClearBit_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_ClearBit_CALL_INSTANCE));
  CMOCK_GPIO_ClearBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_ClearBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_ClearBit_CallInstance = CMock_Guts_MemChain(Mock.GPIO_ClearBit_CallInstance, cmock_guts_index);
  Mock.GPIO_ClearBit_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void GPIO_ClearBit_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_PORTS port, PORT_BITS bit)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_ClearBit_CALL_INSTANCE));
  CMOCK_GPIO_ClearBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_ClearBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_ClearBit_CallInstance = CMock_Guts_MemChain(Mock.GPIO_ClearBit_CallInstance, cmock_guts_index);
  Mock.GPIO_ClearBit_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_GPIO_ClearBit(cmock_call_instance, port, bit);
}

void GPIO_ClearBit_AddCallback(CMOCK_GPIO_ClearBit_CALLBACK Callback)
{
  Mock.GPIO_ClearBit_IgnoreBool = (char)0;
  Mock.GPIO_ClearBit_CallbackBool = (char)1;
  Mock.GPIO_ClearBit_CallbackFunctionPointer = Callback;
}

void GPIO_ClearBit_Stub(CMOCK_GPIO_ClearBit_CALLBACK Callback)
{
  Mock.GPIO_ClearBit_IgnoreBool = (char)0;
  Mock.GPIO_ClearBit_CallbackBool = (char)0;
  Mock.GPIO_ClearBit_CallbackFunctionPointer = Callback;
}

void GPIO_ClearBit_CMockIgnoreArg_port(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_GPIO_ClearBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_ClearBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.GPIO_ClearBit_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_port = 1;
}

void GPIO_ClearBit_CMockIgnoreArg_bit(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_GPIO_ClearBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_ClearBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.GPIO_ClearBit_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_bit = 1;
}

bool GPIO_IsBitSet(GPIO_PORTS port, PORT_BITS bit)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GPIO_IsBitSet);
  cmock_call_instance = (CMOCK_GPIO_IsBitSet_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GPIO_IsBitSet_CallInstance);
  Mock.GPIO_IsBitSet_CallInstance = CMock_Guts_MemNext(Mock.GPIO_IsBitSet_CallInstance);
  if (Mock.GPIO_IsBitSet_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.GPIO_IsBitSet_FinalReturn;
    Mock.GPIO_IsBitSet_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.GPIO_IsBitSet_CallbackBool &&
      Mock.GPIO_IsBitSet_CallbackFunctionPointer != NULL)
  {
    bool cmock_cb_ret = Mock.GPIO_IsBitSet_CallbackFunctionPointer(port, bit, Mock.GPIO_IsBitSet_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_port)
  {
    UNITY_SET_DETAILS(CMockString_GPIO_IsBitSet,CMockString_port);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_port), (void*)(&port), sizeof(GPIO_PORTS), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_bit)
  {
    UNITY_SET_DETAILS(CMockString_GPIO_IsBitSet,CMockString_bit);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_bit), (void*)(&bit), sizeof(PORT_BITS), cmock_line, CMockStringMismatch);
  }
  }
  if (Mock.GPIO_IsBitSet_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.GPIO_IsBitSet_CallbackFunctionPointer(port, bit, Mock.GPIO_IsBitSet_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_GPIO_IsBitSet(CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance, GPIO_PORTS port, PORT_BITS bit)
{
  memcpy((void*)(&cmock_call_instance->Expected_port), (void*)(&port),
         sizeof(GPIO_PORTS[sizeof(port) == sizeof(GPIO_PORTS) ? 1 : -1])); /* add GPIO_PORTS to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_port = 0;
  memcpy((void*)(&cmock_call_instance->Expected_bit), (void*)(&bit),
         sizeof(PORT_BITS[sizeof(bit) == sizeof(PORT_BITS) ? 1 : -1])); /* add PORT_BITS to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_bit = 0;
}

void GPIO_IsBitSet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_IsBitSet_CALL_INSTANCE));
  CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_IsBitSet_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_IsBitSet_CallInstance = CMock_Guts_MemChain(Mock.GPIO_IsBitSet_CallInstance, cmock_guts_index);
  Mock.GPIO_IsBitSet_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.GPIO_IsBitSet_IgnoreBool = (char)1;
}

void GPIO_IsBitSet_CMockStopIgnore(void)
{
  if(Mock.GPIO_IsBitSet_IgnoreBool)
    Mock.GPIO_IsBitSet_CallInstance = CMock_Guts_MemNext(Mock.GPIO_IsBitSet_CallInstance);
  Mock.GPIO_IsBitSet_IgnoreBool = (char)0;
}

void GPIO_IsBitSet_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_IsBitSet_CALL_INSTANCE));
  CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_IsBitSet_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_IsBitSet_CallInstance = CMock_Guts_MemChain(Mock.GPIO_IsBitSet_CallInstance, cmock_guts_index);
  Mock.GPIO_IsBitSet_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void GPIO_IsBitSet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, GPIO_PORTS port, PORT_BITS bit, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GPIO_IsBitSet_CALL_INSTANCE));
  CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_IsBitSet_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GPIO_IsBitSet_CallInstance = CMock_Guts_MemChain(Mock.GPIO_IsBitSet_CallInstance, cmock_guts_index);
  Mock.GPIO_IsBitSet_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_GPIO_IsBitSet(cmock_call_instance, port, bit);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void GPIO_IsBitSet_AddCallback(CMOCK_GPIO_IsBitSet_CALLBACK Callback)
{
  Mock.GPIO_IsBitSet_IgnoreBool = (char)0;
  Mock.GPIO_IsBitSet_CallbackBool = (char)1;
  Mock.GPIO_IsBitSet_CallbackFunctionPointer = Callback;
}

void GPIO_IsBitSet_Stub(CMOCK_GPIO_IsBitSet_CALLBACK Callback)
{
  Mock.GPIO_IsBitSet_IgnoreBool = (char)0;
  Mock.GPIO_IsBitSet_CallbackBool = (char)0;
  Mock.GPIO_IsBitSet_CallbackFunctionPointer = Callback;
}

void GPIO_IsBitSet_CMockIgnoreArg_port(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_IsBitSet_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.GPIO_IsBitSet_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_port = 1;
}

void GPIO_IsBitSet_CMockIgnoreArg_bit(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_GPIO_IsBitSet_CALL_INSTANCE* cmock_call_instance = (CMOCK_GPIO_IsBitSet_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.GPIO_IsBitSet_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_bit = 1;
}

