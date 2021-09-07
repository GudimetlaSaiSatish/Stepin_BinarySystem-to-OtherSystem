/**
 * @file operations.h
 * @author Sai Satish Gudimetla
 * @brief This header file includes all the prototypes of the functions.
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STDBOOL_H_
    #define STDBOOL_H_
    #include "stdbool.h"
#endif


/**
 * @brief This function reverses the input number.
 * 
 * This function is used by the main feature functions for Conversions.
 * 
 * @param n   input is an Integer number to be reversed.
 * @return int   Output is a reversed input.
 */
int findReverse(int n);

/**
 * @brief This function is used by the main feature functions for Conversions.
 * 
 */
int Get_Integral(char s_value[]);

/**
 * @brief This function is used by the main feature functions for Conversions.
 * 
 */
int Get_Fractional(char s_value[]);
/**
 * @brief This function is used by the main feature functions for Conversions.
 * 
 * @param bin Binary Input is validated in this function.
 * @return true  returns TRUE for the Valid Binary input.
 * @return false  returns FALSE for the Valid Binary input.
 */
bool checkIsBinaryIntegral(int bin);


/**
 * @brief This function returns the Decimal output for the Binary input.
 * 
 * @param input string is a valid Binary value.
 * @return Output is a Decimal value in Double type.
 */
double Binary_to_Decimal(char input[]);


/**
 * @brief This function prints the Octal value for the Binary input.
 * 
 * @param input string is a valid Binary value.
 */
void Binary_to_Octal(char inp[]);


/**
 * @brief This function prints the Hexadecimal value for the Binary input.
 * 
 * @param input string is a valid Binary value.
 * 
 */
void Binary_To_Hexadecimal (char input[]);
