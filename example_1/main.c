/*
 * Algorithms.c
 *
 * Created: 10/15/2018 8:45:57 PM
 * Author : Hazem
 */ 

#include "Bubble_sort.h"
#include "Insertion_sort.h"
#include "Merge_sort.h"
#include <stdio.h>
#include <stdlib.h>

void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
	printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
 int arr[] = {22, 21, 2, 6, 5, 4}; 
 int arr_size = sizeof(arr);
 int k=0 ;
 
 for ( i=0 ; i<arr_size ; i++  ){
	if( a[i] < a[i+1] )
	 k++;
 }
 
 if( k > 0 )
   return 0;

 if (arr_size<5)
   bubbleSort(arr, arr_size);
 
 else if(arr_size<30)
   insertionSort(arr,arr_size);
	 
 else
   mergeSort(arr,0,arr_size);	 
	 
 printArray(arr,arr_size-1);	 
	 
 return 0;
}

