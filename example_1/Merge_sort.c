/*
 * Merge_sort.c
 *
 * Created: 10/15/2018 8:49:18 PM
 *  Author: Hazem
 */ 
#include "Merge_sort.h"


void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 =  r - m;
	
	int L[n1], R[n2];
	
	for (i = 0; i < n1; i++)
	L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
	R[j] = arr[m + 1+ j];
	
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = (l+r)/2;
		
		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		
		merge(arr, l, m, r);
	}
}