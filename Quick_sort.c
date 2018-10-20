#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int x,int y);
void quickSort(int arr[],int left ,int right);
int partion(int arr[],int left, int right,int pivot );



int main()
{
 int i;
 int arr[] = { 21, 2, 6, 5, 90, 200, 29, 1, 3};
 int arr_size = sizeof(arr);
 quickSort(arr,0,arr_size-1);

 for(i=0;i<arr_size;i++)
    printf("%d",arr[i]);

    return 0;
}


void quickSort(int arr[],int left ,int right){
    if (left >=right)
        return;

    int pivot= arr[(left+right)/2 ];
    int index = partion(arr,left,right,pivot);
    quickSort(arr,left,index-1);
    quickSort(arr,index,right);

}

int partion(int arr[],int left, int right,int pivot ){
    while(left<=right){
        while(arr[left]<pivot){
            left++;
        }
        while(arr[right]>pivot){
            right--;
        }
        if (left<=right){
            swap(arr,left,right);
            left++;
            right--;

        }
    }

    return left;
}

void swap(int arr[], int x,int y){
int temp ;
temp = arr[x];
arr[x] = arr[y];
arr[y] = temp;
}
