#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "define_macro_functions.h"
#include "define_macros.h"

#include "blockchain_functions.h"

#include "define_macros_test.h"
#include "variables_test.h"
#include "blockchain_functions_test.h"

/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: blockchain_test
Description: Test the blockchain_functions
Return: The number of passed blockchain test
-----------------------------------------------------------------------------------------------------------
*/

int blockchain_test()
{   
  // Variables

  // define macros
  #define BLOCKCHAIN_TEST 4
  #define NETWORK_BLOCK "0d0da5d5f1e00500000000000000000000000000000000000000000000000000000000000000050000000002b5d9ab0101fff9d8ab0101b2cce199a30202b1ae08c48f3b3e9ba6e22d9fdaf289eda8565179ebff7787883ecaf49f1ebdfba51201159a7ed6a1065b708355d900b06e4e1c47238397723f4d379945b3bcdf10f09702c4187c424c4f434b434841494e5f52455345525645445f42595445535f53544152547c64656c6567617465317c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c5843413176313851736635504b4c723847467231346a486b6a6766336d506d314d4156627377427339515037467747544c434534537759693831425270327672635631326d614d744377395445314e5a525679796e51336532633362376d785277337c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c307c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c64656c65676174655f6261636b75705f312c64656c65676174655f6261636b75705f322c64656c65676174655f6261636b75705f332c64656c65676174655f6261636b75705f342c64656c65676174655f6261636b75705f357c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c64656c6567617465327c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c58434131675463557337443761486f32756f533239474445706a4d576b52357a7a514a43337a78437742315231674d4c594263736d70414267575a394d5776764c57585633516868595a39376d63787356383854665a725032564d416d6152514a347c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c307c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c64656c65676174655f6261636b75705f312c64656c65676174655f6261636b75705f322c64656c65676174655f6261636b75705f332c64656c65676174655f6261636b75705f342c64656c65676174655f6261636b75705f357c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c64656c6567617465337c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c584341313035303634674d4a6a6e59706b4c70533768546f6544375443625531796464475263427a7173416b35425447327643776e4d7536504c5a6232385a36644543566853587038374d374865505369624c444b4777363433696a4b6e4d774c43754d727c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c307c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c64656c65676174655f6261636b75705f312c64656c65676174655f6261636b75705f322c64656c65676174655f6261636b75705f332c64656c65676174655f6261636b75705f342c64656c65676174655f6261636b75705f357c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c7057d588d0a105e22e1f9751dd49b1b5a52656f21fa8755a1d01ec1243d4f5867c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c7057d588d0a105e22e1f9751dd49b1b5a52656f21fa8755a1d01ec1243d4f5867c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477cfd4eb80959c630e941bb38fed8bfba3fca8ebc7468459082bf0da96e4cb8c27721718b8f72acd61c41c92aed30c0a3bf8eebc9a959259f2797adc4604c3cc0832f980f6df28ea98ada3bc11824d00b0c7c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c94f4487e1b2fec954309ef1289ecb2e15043a2461ecc7b2ae7d4470607ef82eb1cfa97d84991fe4a7bfdfd715606bc27e2967a6c557cfb5875879b671740b7d87c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c747275657c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c823a4ee79fe8b07fdeddf57de697cdad1774cfa7676de4a7178e0e697391a9c07c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c30303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303035363536676635676866696a64696f76644a4450494f53677a663534683477363532343567643573313032316430673635316466383467643531363531663635643467353836343136643566345a36643534673635643473363534673635346673646734357c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c301257ae04b33134696e1d7074d35e0c43e36eaa5982d26daef2f92085e1ad1d8d5b7fc2427dcd07474ead04cc1b73f7bf4df4142d5e3680738e6b83dbc1a96ad3c27fee0a8addd8467a8cda1bdb2a0d7c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c94f4487e1b2fec954309ef1289ecb2e15043a2461ecc7b2ae7d4470607ef82eb1cfa97d84991fe4a7bfdfd715606bc27e2967a6c557cfb5875879b671740b7d87c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c747275657c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c7057d588d0a105e22e1f9751dd49b1b5a52656f21fa8755a1d01ec1243d4f5867c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c30303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303035363536676635676866696a64696f76644a4450494f53677a663534683477363532343567643573313032316430673635316466383467643531363531663635643467353836343136643566345a36643534673635643473363534673635346673646734357c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c7651dc9b5a5f7aca51c6a0a5bfd6c0e7f306866a72f60821f26c788ccef3b26c6e4e1790ad730e245c8d1ac18c30a992c503849a4f45a2098aa533d3e42ec5116334598a7bfc13788608bf7fd0ecb8047c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c94f4487e1b2fec954309ef1289ecb2e15043a2461ecc7b2ae7d4470607ef82eb1cfa97d84991fe4a7bfdfd715606bc27e2967a6c557cfb5875879b671740b7d87c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c747275657c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c747275657c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c00000000000000000000000000000000000000000000000000000000000000057c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000057c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000057c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000057c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000057c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000057c424c4f434b434841494e5f52455345525645445f42595445535f454e447c000500000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000002000000000000000000000000000000000000000000000000000000000000000300000000000000000000000000000000000000000000000000000000000000040000000000000000000000000000000000000000000000000000000000000005"
  #define VARINT_ENCODED_VALUE_1 0xb2f58199a302 // random value
  #define VARINT_ENCODED_VALUE_TEXT_1 "b2f58199a302" // random value
  #define VARINT_DECODED_VALUE_1 78167177906 // random value
  #define VARINT_ENCODED_VALUE_2 0x7d // no encoding or decoding
  #define VARINT_ENCODED_VALUE_TEXT_2 "7d" // no encoding or decoding
  #define VARINT_DECODED_VALUE_2 125 // no encoding or decoding
  #define VARINT_ENCODED_VALUE_3 0x8002 // start of 1 byte length
  #define VARINT_ENCODED_VALUE_TEXT_3 "8002" // start of 1 byte length
  #define VARINT_DECODED_VALUE_3 256 // start of 1 byte length
  #define VARINT_ENCODED_VALUE_4 0xff7f // end of 1 byte length
  #define VARINT_ENCODED_VALUE_TEXT_4 "0xff7f" // end of 1 byte length
  #define VARINT_DECODED_VALUE_4 16383 // end of 1 byte length
  #define VARINT_ENCODED_VALUE_5 0x808001 // start of 2 byte length
  #define VARINT_ENCODED_VALUE_TEXT_5 "808001" // start of 2 byte length
  #define VARINT_DECODED_VALUE_5 16384 // start of 2 byte length
  #define VARINT_ENCODED_VALUE_6 0xffff7f // end of 2 byte length
  #define VARINT_ENCODED_VALUE_TEXT_6 "ffff7f" // end of 2 byte length
  #define VARINT_DECODED_VALUE_6 2097151 // end of 2 byte length
  #define VARINT_ENCODED_VALUE_7 0x80808001 // start of 3 byte length
  #define VARINT_ENCODED_VALUE_TEXT_7 "80808001" // start of 3 byte length
  #define VARINT_DECODED_VALUE_7 2097152 // start of 3 byte length
  #define VARINT_ENCODED_VALUE_8 0xffffff7f // end of 3 byte length
  #define VARINT_ENCODED_VALUE_TEXT_8 "ffffff7f" // end of 3 byte length
  #define VARINT_DECODED_VALUE_8 268435455 // end of 3 byte length
  #define VARINT_ENCODED_VALUE_9 0x8080808001 // start of 4 byte length
  #define VARINT_ENCODED_VALUE_TEXT_9 "8080808001" // start of 4 byte length
  #define VARINT_DECODED_VALUE_9 268435456 // start of 4 byte length
  #define VARINT_ENCODED_VALUE_10 0xffffffff7f // end of 4 byte length
  #define VARINT_ENCODED_VALUE_TEXT_10 "ffffffff7f" // end of 4 byte length
  #define VARINT_DECODED_VALUE_10 34359738367 // end of 4 byte length
  #define VARINT_ENCODED_VALUE_11 0x808080808001 // start of 5 byte length
  #define VARINT_ENCODED_VALUE_TEXT_11 "808080808001" // start of 5 byte length
  #define VARINT_DECODED_VALUE_11 34359738368 // start of 5 byte length
  #define VARINT_ENCODED_VALUE_12 0xffffffffff7f // end of 5 byte length
  #define VARINT_ENCODED_VALUE_TEXT_12 "ffffffffff7f" // end of 5 byte length
  #define VARINT_DECODED_VALUE_12 4398046511103 // end of 5 byte length
  #define VARINT_ENCODED_VALUE_13 0x80808080808001 // start of 6 byte length
  #define VARINT_ENCODED_VALUE_TEXT_13 "80808080808001" // start of 6 byte length
  #define VARINT_DECODED_VALUE_13 4398046511104 // start of 6 byte length
  #define VARINT_ENCODED_VALUE_14 0xffffffffffff7f // end of 6 byte length
  #define VARINT_ENCODED_VALUE_TEXT_14 "ffffffffffff7f" // end of 6 byte length
  #define VARINT_DECODED_VALUE_14 562949953421311 // end of 6 byte length
  #define VARINT_ENCODED_VALUE_15 0x8080808080808001 // start of 7 byte length
  #define VARINT_ENCODED_VALUE_TEXT_15 "8080808080808001" // start of 7 byte length
  #define VARINT_DECODED_VALUE_15 562949953421312 // start of 7 byte length
  #define VARINT_ENCODED_VALUE_16 0xffffffffffffff7f // end of 7 byte length
  #define VARINT_ENCODED_VALUE_TEXT_16 "ffffffffffffff7f" // end of 7 byte length
  #define VARINT_DECODED_VALUE_16 72057594037927935 // end of 7 byte length
  #define VARINT_ENCODED_VALUE_17 0x808080808080808001 // start of 8 byte length
  #define VARINT_ENCODED_VALUE_TEXT_17 "808080808080808001" // start of 8 byte length
  #define VARINT_DECODED_VALUE_17 72057594037927936 // start of 8 byte length
  #define VARINT_ENCODED_VALUE_18 0xffffffffffffffff7f // end of 8 byte length
  #define VARINT_ENCODED_VALUE_TEXT_18 "ffffffffffffffff7f" // end of 8 byte length
  #define VARINT_DECODED_VALUE_18 9223372036854775807 // end of 8 byte length

  // reset the variables
  memset(data_test,0,strnlen(data_test,BUFFER_SIZE));
  count_test = 0;

  // write the start test message
  color_print(TEST_OUTLINE,"blue");
  printf("\033[1;34mvarint_decode test - Total test: %d\033[0m\n",BLOCKCHAIN_TEST);
  color_print(TEST_OUTLINE,"blue");
  printf("\n");

  // run the varint_decode test
  if (varint_decode(VARINT_ENCODED_VALUE_1) == VARINT_DECODED_VALUE_1 ||
      varint_decode(VARINT_ENCODED_VALUE_2) == VARINT_DECODED_VALUE_2 ||
      varint_decode(VARINT_ENCODED_VALUE_3) == VARINT_DECODED_VALUE_3 ||
      varint_decode(VARINT_ENCODED_VALUE_4) == VARINT_DECODED_VALUE_4 ||
      varint_decode(VARINT_ENCODED_VALUE_5) == VARINT_DECODED_VALUE_5 ||
      varint_decode(VARINT_ENCODED_VALUE_6) == VARINT_DECODED_VALUE_6 ||
      varint_decode(VARINT_ENCODED_VALUE_7) == VARINT_DECODED_VALUE_7 ||
      varint_decode(VARINT_ENCODED_VALUE_8) == VARINT_DECODED_VALUE_8 ||
      varint_decode(VARINT_ENCODED_VALUE_9) == VARINT_DECODED_VALUE_9 ||
      varint_decode(VARINT_ENCODED_VALUE_10) == VARINT_DECODED_VALUE_10 ||
      varint_decode(VARINT_ENCODED_VALUE_11) == VARINT_DECODED_VALUE_11 ||
      varint_decode(VARINT_ENCODED_VALUE_12) == VARINT_DECODED_VALUE_12 ||
      varint_decode(VARINT_ENCODED_VALUE_13) == VARINT_DECODED_VALUE_13 ||
      varint_decode(VARINT_ENCODED_VALUE_14) == VARINT_DECODED_VALUE_14 ||
      varint_decode(VARINT_ENCODED_VALUE_15) == VARINT_DECODED_VALUE_15 ||
      varint_decode(VARINT_ENCODED_VALUE_16) == VARINT_DECODED_VALUE_16)
  {
    color_print("PASSED! Test for varint decode","green");
    count_test++;
  }
  else
  {
    color_print("FAILED! Test for varint decode","red");
  }

  // run the varint_encode test
  if ((varint_encode(VARINT_DECODED_VALUE_1,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_1,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_2,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_2,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_3,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_3,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_4,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_4,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_5,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_5,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_6,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_6,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_7,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_7,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_8,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_8,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_9,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_9,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_10,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_10,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_11,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_11,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_12,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_12,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_13,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_13,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_14,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_14,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_15,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_15,BUFFER_SIZE) == 0) ||
      (varint_encode(VARINT_DECODED_VALUE_16,data_test) == 1 && strncmp(data_test,VARINT_ENCODED_VALUE_TEXT_16,BUFFER_SIZE) == 0))
  {
    color_print("PASSED! Test for varint encode","green");
    count_test++;
    varint_encode(562949953421311,data_test);printf("%s\n",data_test);
    varint_encode(1020304050,data_test);printf("%s\n",data_test);
  }
  else
  {
    color_print("FAILED! Test for varint encode","red");
  }

  // run the network_block_string_to_blockchain_data test and verify the network block data
  if (network_block_string_to_blockchain_data(NETWORK_BLOCK) == 1)
  {
    // verify the blockchain_data
    if (verify_network_block_data(1,0) == 1)
    {
      color_print("PASSED! Test for converting a network_block_string to a blockchain_data struct","green");
      count_test++;
    }
    else
    {
      color_print("FAILED! Test for converting a network_block_string to a blockchain_data struct","red");
    }
  }
  else
  {
    color_print("FAILED! Test for converting a network_block_string to a blockchain_data struct","red");
  }

  // run the blockchain_data_to_network_block_string test and verify the network_block_string
  if (blockchain_data_to_network_block_string(data_test) == 1)
  {
    // verify the network_block_string
    if (strncmp(NETWORK_BLOCK,data_test,BUFFER_SIZE) == 0)
    {
      color_print("PASSED! Test for converting a blockchain_data struct to a network_block_string","green");
      count_test++;
    }
    else
    {
      color_print("FAILED! Test for converting a blockchain_data struct to a network_block_string","red");
    }
  }
  else
  {
    color_print("FAILED! Test for converting a blockchain_data struct to a network_block_string","red");
  }



  // write the end test message
  if (count_test == BLOCKCHAIN_TEST)
  {
    printf("\n");
    color_print(TEST_OUTLINE,"green");
    printf("\033[1;32mvarint_decode test - Passed test: %d, Failed test: 0\033[0m\n",BLOCKCHAIN_TEST);
    color_print(TEST_OUTLINE,"green");
    printf("\n\n");
  }
  else
  {
    printf("\n");
    color_print(TEST_OUTLINE,"red");
    printf("\033[1;31mvarint_decode test - Passed test: %d, Failed test: %d\033[0m\n",count_test,BLOCKCHAIN_TEST-count_test);
    color_print(TEST_OUTLINE,"red");
    printf("\n\n");
  } 
  return count_test;

  #undef BLOCKCHAIN_TEST
  #undef NETWORK_BLOCK
  #undef VARINT_ENCODED_VALUE_1
  #undef VARINT_ENCODED_VALUE_TEXT_1
  #undef VARINT_DECODED_VALUE_1
  #undef VARINT_ENCODED_VALUE_2
  #undef VARINT_ENCODED_VALUE_TEXT_2
  #undef VARINT_DECODED_VALUE_2
  #undef VARINT_ENCODED_VALUE_3
  #undef VARINT_ENCODED_VALUE_TEXT_3
  #undef VARINT_DECODED_VALUE_3
  #undef VARINT_ENCODED_VALUE_4
  #undef VARINT_ENCODED_VALUE_TEXT_4
  #undef VARINT_DECODED_VALUE_4
  #undef VARINT_ENCODED_VALUE_5
  #undef VARINT_ENCODED_VALUE_TEXT_5
  #undef VARINT_DECODED_VALUE_5
  #undef VARINT_ENCODED_VALUE_6
  #undef VARINT_ENCODED_VALUE_TEXT_6
  #undef VARINT_DECODED_VALUE_6
  #undef VARINT_ENCODED_VALUE_7
  #undef VARINT_ENCODED_VALUE_TEXT_7
  #undef VARINT_DECODED_VALUE_7
  #undef VARINT_ENCODED_VALUE_8
  #undef VARINT_ENCODED_VALUE_TEXT_8
  #undef VARINT_DECODED_VALUE_8
  #undef VARINT_ENCODED_VALUE_9
  #undef VARINT_ENCODED_VALUE_TEXT_9
  #undef VARINT_DECODED_VALUE_9
  #undef VARINT_ENCODED_VALUE_10
  #undef VARINT_ENCODED_VALUE_TEXT_10
  #undef VARINT_DECODED_VALUE_10
  #undef VARINT_ENCODED_VALUE_11
  #undef VARINT_ENCODED_VALUE_TEXT_11
  #undef VARINT_DECODED_VALUE_11
  #undef VARINT_ENCODED_VALUE_12
  #undef VARINT_ENCODED_VALUE_TEXT_12
  #undef VARINT_DECODED_VALUE_12
  #undef VARINT_ENCODED_VALUE_13
  #undef VARINT_ENCODED_VALUE_TEXT_13
  #undef VARINT_DECODED_VALUE_13
  #undef VARINT_ENCODED_VALUE_14
  #undef VARINT_ENCODED_VALUE_TEXT_14
  #undef VARINT_DECODED_VALUE_14
  #undef VARINT_ENCODED_VALUE_15
  #undef VARINT_ENCODED_VALUE_TEXT_15
  #undef VARINT_DECODED_VALUE_15
  #undef VARINT_ENCODED_VALUE_16
  #undef VARINT_ENCODED_VALUE_TEXT_16
  #undef VARINT_DECODED_VALUE_16
  #undef VARINT_ENCODED_VALUE_17
  #undef VARINT_ENCODED_VALUE_TEXT_17
  #undef VARINT_DECODED_VALUE_17
  #undef VARINT_ENCODED_VALUE_18
  #undef VARINT_ENCODED_VALUE_TEXT_18
  #undef VARINT_DECODED_VALUE_18
}