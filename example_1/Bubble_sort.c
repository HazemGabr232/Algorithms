/*
 * CFile1.c
 *
 * Created: 10/15/2018 8:47:35 PM
 *  Author: Hazem
 */ 
#include "Bubble_sort.h"

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
	
	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
	if (arr[j] > arr[j+1])
	swap(&arr[j], &arr[j+1]);
}