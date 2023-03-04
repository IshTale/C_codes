#include <stdio.h>

int* bubSort(int arr [], int size);

int main()
{
    
    int* p;
    int num = 13;
    int arr[7] = {3, 5, 8, 4, 3, 1, 9};
    p = bubSort(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", *(p + i));
    }

    return 0;
}

int* bubSort(int arr [], int size){
    for(int a = 0; a < size; a++){
        for(int i = 1; i < size - a; i++){
            if(arr[i - 1] > arr[i]){
                int x = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = x;
            }
        }
    }
    return arr;
}