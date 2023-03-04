#include <stdio.h>

int* SelecSort(int arr [], int size);

int main()
{
    
    int* p;
    int num = 13;
    int arr[7] = {9, 2, 8, 3, 4, 1, 11};
    p = SelecSort(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", *(p + i));
    }

    return 0;
}

int* SelecSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int pos = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[pos]){
                pos = j;
            }
        }
        int x = arr[i];
        arr[i] = arr[pos];
        arr[pos] = x;
    }
    return arr;
}

