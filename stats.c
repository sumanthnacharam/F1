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
 * @brief <This file gives the statics about data and also sorts the array elements>
 *
 * <Add Extended Description Here>
 *
 * @author <Sumanth Nacharam>
 * @date <05/05/2021 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)





void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  	sort_array(test,SIZE);
  	
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
  print_array(test,SIZE);

}


/* Add other Implementation File Code Here */
int find_median(unsigned char *test,int size){

	int median =0;
	
	
	if(size % 2 == 0)
	    	median  =  (test[size/2] + test[(size/2)+1])/2;
	else
		median = test[(size/2)+1];
		
	return median;
	

}

int find_mean(unsigned char *test,int size) {
	unsigned char Loop_Var; unsigned int sum = 0;
	int mean;
	
	for(Loop_Var = 0 ; Loop_Var < size ; Loop_Var++)
	{
		sum +=  test[Loop_Var];
		
	}
	mean = (sum / size);
	return mean;

}
void sort_array(unsigned char *test,int size) {
        unsigned char Loop_Var, swapped = 0;
	unsigned char Temp;
	
	while(1){
	
		swapped = 0;
	
		for(Loop_Var = 0 ; Loop_Var < size - 1; Loop_Var++){
		
			if(test[Loop_Var] < test[Loop_Var+1]){
				Temp = test[Loop_Var] ;
				test[Loop_Var] = test[Loop_Var+1];
				test[Loop_Var+1] = Temp ;
				swapped = 1;
			}
		}
		if(swapped == 0)
			break;
		
	}
}

unsigned char find_maximum(unsigned char *test,int size) {
	unsigned char Loop_Var, maximum = test[0];
	
	for(Loop_Var = 1 ; Loop_Var < size ; Loop_Var++)
	{
		if (maximum < test[Loop_Var])
		{
			maximum = test[Loop_Var];
		}
	}
	
	return maximum;

}
unsigned char find_minimum(unsigned char *test,int size) {
	unsigned char Loop_Var, minimum = test[0];
	
	for(Loop_Var = 1 ; Loop_Var < size ; Loop_Var++)
	{
		if (minimum > test[Loop_Var])
		{
			minimum = test[Loop_Var];
		}
	}
	
	return minimum;
	
	
}

void print_statistics(unsigned char *test,int size) {

	printf("Median is %d\n", find_median(test, size));
	printf("Mean is %d\n", find_mean(test, size));
	printf("Maximum is %d\n", find_maximum(test, size));
	printf("Minimum is %d\n", find_minimum(test, size));



}


void print_array(unsigned char *test, int size)  {
	unsigned char Loop_Var;
	printf("The sorted Array is: ");
	
	for(Loop_Var = 0 ; Loop_Var < size ; Loop_Var++)
	{
		printf("%d ",test[Loop_Var]);
		
	}
	printf("\n");

}

