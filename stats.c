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
 * @file <stats.c> 
 * @brief <Source file for all functions described in stats header >
 *
 * <Add Extended Description Here>
 *
 * @author <A Harish>
 * @date <12/24/17>
 *
 */

#include <stdio.h>
#include "stats.h"
#include <limits.h>

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char* arr, int sz)
{
  printf("Array is...\n");
  int i;                         // loop variable - C is not allowing declaration and initialization simultaneously
  for( i=0;i<sz;i++)
   printf("%u\t", arr[i]);
}

unsigned char find_minimum(unsigned char* arr, int sz)
{
 unsigned char min = INT_MAX;
 int i;
 for(i=0;i< sz;i++)
 {
  if(arr[i] < min)
    min = arr[i];
  }
 return min;
}

unsigned char find_maximum(unsigned char* arr, int sz)
{
 unsigned char max = INT_MIN;
 int i;
 for(i=0;i< sz;i++)
 {
  if(arr[i] > max)
    max = arr[i];
  }
 return max;
}

double find_mean(unsigned char* arr, int sz)
{
 double mean=0;
 int i;
 for(i=0; i<sz;i++)
    mean += arr[i];
 mean /= sz;
 return mean;
}

void sort_array(unsigned char* arr, int sz)
{
int i,j;
 for (i = 0; i < (sz-1); i++)
    {
        for (j = 0; j < (sz-1) ; j++)
        {
            if (arr[j+1] < arr[j])
            {
                unsigned char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted array in descending order is...\n");
    int it;
    for ( it = (sz-1); it>=0 ; it--)
    {
        printf("%u\t", arr[it]);
    }
}

/* Since array is already sorted, we see if the number of elements is even or odd and do the calculations likewise */

double find_median(unsigned char* arr, int sz)
{
  if (sz % 2 != 0)
       return (double)arr[sz/2];
     
    return (double)(arr[(sz-1)/2] + arr[sz/2])/2.0; 
}

void print_statistics(unsigned char* arr, int sz)
{
  printf("\nStatistics of this dataset are...");
  printf("\nMinimum element is %u",find_minimum(arr, SIZE));
  printf("\nMaximum element is %u",find_maximum(arr,SIZE));
  printf("\nMean of dataset is %f",find_mean(arr,SIZE));
  printf("\nMedian of dataset is %f\n", find_median(arr, SIZE));
}


int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
 
  print_array(test, SIZE);
  printf("\nMinimum element is %u",find_minimum(test, SIZE));
  printf("\nMaximum element is %u",find_maximum(test,SIZE));
  printf("\nMean of dataset is %f",find_mean(test,SIZE));
  sort_array(test,SIZE);
  printf("\nMedian of dataset is %f", find_median(test, SIZE));
  print_statistics(test, SIZE);

  return 0;
}
