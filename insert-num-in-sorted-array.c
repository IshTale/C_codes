#include <stdio.h>

int * insert(int num, int arr[], int size);

int main()
{
    
    int * p;
    int num = 13;
    int arr[5] = {5, 10, 15, 20, 25};
    p = insert(num, arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", *(p + i));
    }

    return 0;
}

int * insert(int num, int arr[], int size){
    arr[size - 1] = num;
    int x;
    int j;
    for(int i = size - 1; i >= 0; i--){
        if(j > 0 || i == size - 1)
            j = i - 1;
        if(arr[i] > arr[j])
            break;
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
    }
    return arr;
}
