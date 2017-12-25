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
 * @file <stats> 
 * @brief <Perform statistical anaylsis on a dataset. The analysis includes calculating minimum, maximum, mean and median of a dataset >
 *
 * <Add Extended Description Here>
 *
 * @author <A Harish>
 * @date <12/24/17>
 *
 **/
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 **/

/* Function prototypes */

// Calculate minimum - takes array(dataset) and size as parameters and returns a single unsigned char
unsigned char find_minimum(unsigned char*, int);
 
// Calculate maximum - takes array and size as parameters and returns a single unsigned char
unsigned char find_maximum(unsigned char*, int);

// finding median - takes sorted array and size and returns a double. Using a double here just to avoid any overflows
double find_median(unsigned char*, int);

// finding mean - takes array and size as parameters and returns mean which is of type double
double find_mean(unsigned char*, int);

// printing the array - just takes array and size as parameters and prints all the elements. Returns nothing hence is of type void
void print_array(unsigned char*, int);

// Prints all the required statistics. Returns nothing, hence void
void print_statistics(unsigned char*, int);

// Sorts elements in descending order as per requirement and prints them. Dosn't return anything
void sort_array(unsigned char*, int);

#endif /* __STATS_H_ */ 
