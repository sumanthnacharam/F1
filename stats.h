/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <This header consists of declarations of the functions and parameters they take>
 *
 * 
 *
 * @author <Sumanth Nacharam>
 * @date <05/06/2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Function find the median and returns back the Median
 * @param It takes the test array as an input
 * @return it returns the Median
 */
int find_median(unsigned char *test);


/**
 * @brief Function find the Mean and returns back the Mean
 * @param It takes the test array as an input
 * @return it returns the Mean
 */
int find_mean(unsigned char *test);


/**
 * @brief Function will sort the array from Largest to smallest 
 * and returns back the nothing
 * @param It takes the test array as an input
 * @return it returns the Nothing
 */
void sort_array(unsigned char *test);



/**
 * @brief Function find the Maximum element of the Array
 * and returns back the Maximum
 * @param It takes the test array as an input
 * @return it returns the Maximum
 */ 
unsigned char find_maximum(unsigned char *test);


/**
 * @brief Function find the Minimum element of the Array
 * and returns back the Minimum
 * @param It takes the test array as an input
 * @return it returns the Minimum
 */
unsigned char find_minimum(unsigned char *test);


/**
 * @brief Function will call all statistical fucntions which
 * will return back their respective outputs, which will get printed by this function
 * @param It takes the test array as an input
 * @return it returns the Nothing
 */
void print_statistics(unsigned char *test);


/**
 * @brief Function prints the sorted array.
 * @param It takes the test sorted array as an input
 * @return it returns the Nothing
 */
void print_array(unsigned char *test);



#endif /* __STATS_H__ */
