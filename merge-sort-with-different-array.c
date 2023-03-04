#include <stdio.h>
#include <stdlib.h>


int* mergeSort(int arr[], int start, int end, int* ptr1);
int* merge(int arr1[], int arr2[], int size1, int size2, int* ptr1);

int main()
{
    int arr[8] = {10, 6, 8, 5, 9, 3, 7, 4};
    int* p = calloc(sizeof(arr)/sizeof(arr[0]), sizeof(int));
    p = mergeSort(arr, 0, (sizeof(arr)/sizeof(arr[0])) - 1, p);
    for(int i = 0; i < 8; i++){
        printf("%d ", *(p + i));
    }
    free(p);
    
    return 0;
}

int* mergeSort(int arr[], int start, int end, int* ptr1){
    if(start == end){
        int* ptr = calloc(1, sizeof(int));
        *(ptr) = arr[start];
        return ptr;
    }
    int a = (start + end)/2;
    int* p = mergeSort(arr, start, a, ptr1);
    int* q = mergeSort(arr, a + 1, end, ptr1);
    int* s = merge(p, q, a - start + 1, end - a, ptr1);
    free(p);
    free(q);
    return s;
}

int* merge(int arr1[], int arr2[], int size1, int size2, int* ptr1){
    int i = 0;
    int j = 0;
    int k = 0;
    int* b = calloc(size1 + size2, sizeof(int));
    while(j < size2 && k < size1){
        if(arr1[k] > arr2[j]){
            *(b + i) = arr2[j];
            j++;
        }
        else{
            *(b + i) = arr1[k];
            k++;
        }
        i++;
    }
    while(j < size2){
        *(b + i) = arr2[j];
        i++;
        j++;
    }
    while(k < size1){
        *(b + i) = arr1[k];
        i++;
        k++;
    }
    return b;
}





