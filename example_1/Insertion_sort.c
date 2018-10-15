/*
 * Insertion_sort.c
 *
 * Created: 10/15/2018 8:48:53 PM
 *  Author: Hazem
 */ 
#include "Insertion_sort.h"

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i-1;
		
		while (j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}