#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "variables.h"
#include "define_macros_test.h"

#include "network_wallet_functions.h"
#include "network_functions.h"
#include "server_functions.h"
#include "string_functions.h"
#include "VRF_functions.h"

#include "variables_test.h"
#include "network_wallet_functions_test.h"

/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: network_wallet_functions_test
Description: Test the network_wallet functions
Return: The number of passed network_wallet functions test
-----------------------------------------------------------------------------------------------------------
*/

int network_wallet_functions_test(void)
{ 
  // define macros
  #define NETWORK_WALLET_FUNCTIONS_TEST 2

  // reset the variables
  memset(data_test,0,sizeof(data_test));
  count_test = 0;

  // write the start test message
  color_print(TEST_OUTLINE,"blue");
  fprintf(stderr,"\033[1;34mnetwork wallet functions test - Total test: %d\033[0m\n",NETWORK_WALLET_FUNCTIONS_TEST);
  color_print(TEST_OUTLINE,"blue");
  fprintf(stderr,"\n");

  // test the get_public_address function
  memset(xcash_wallet_public_address,0,strnlen(xcash_wallet_public_address,BUFFER_SIZE));
  if (get_public_address(0) == 1)
  {   
    color_print("PASSED! Test for get_public_address","green");
    count_test++;
  }
  else
  {
    color_print("FAILED! Test for get_public_address","red");
  }

  // test the check_reserve_proofs function
  memset(data_test,0,strnlen(data_test,BUFFER_SIZE));
  if (check_reserve_proofs(data_test,CHECK_RESERVE_PROOF_TEST_PUBLIC_ADDRESS,CHECK_RESERVE_PROOF_TEST_RESERVE_PROOF,0) == 1 && memcmp(data_test,CHECK_RESERVE_PROOF_TEST_AMOUNT,2) == 0)
  {   
    color_print("PASSED! Test for check_reserve_proofs","green");
    count_test++;
  }
  else
  {
    color_print("FAILED! Test for check_reserve_proofs","red");
  }
  
  // write the end test message
  if (count_test == NETWORK_WALLET_FUNCTIONS_TEST)
  {
    fprintf(stderr,"\n");
    color_print(TEST_OUTLINE,"green");
    fprintf(stderr,"\033[1;32mnetwork wallet functions test - Passed test: %d, Failed test: 0\033[0m\n",NETWORK_WALLET_FUNCTIONS_TEST);
    color_print(TEST_OUTLINE,"green");
    fprintf(stderr,"\n\n");
  }
  else
  {
    fprintf(stderr,"\n");
    color_print(TEST_OUTLINE,"red");
    fprintf(stderr,"\033[1;31mnetwork wallet functions test - Passed test: %d, Failed test: %d\033[0m\n",count_test,NETWORK_WALLET_FUNCTIONS_TEST-count_test);
    color_print(TEST_OUTLINE,"red");
    fprintf(stderr,"\n\n");
  } 
  return count_test;

  #undef NETWORK_WALLET_FUNCTIONS_TEST
  #undef CHECK_RESERVE_PROOF_TEST_PUBLIC_ADDRESS
  #undef CHECK_RESERVE_PROOF_TEST_RESERVE_PROOF
  #undef CHECK_RESERVE_PROOF_TEST_AMOUNT
}