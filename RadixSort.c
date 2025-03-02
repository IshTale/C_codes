#include <stdio.h>

void radixsort(int* arr, int size){
    int max = arr[0];
    int temp[size]; 

    for(int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    for(int i = 1; max / i > 0; i *= 10){
        int count[10] = {0};
        for(int j = 0; j < size; j++){
            count[(arr[j] / i) % 10]++;
        }
        for(int j = 1; j < 10; j++){
            count[j] += count[j-1];
        }
        for(int j = size-1; j >= 0; j--){
            temp[count[(arr[j] / i) % 10] - 1] = arr[j];
            count[(arr[j] / i) % 10]--;
        }
        for(int j = 0; j < size; j++){
            arr[j] = temp[j];
        }
    }
}

int main()
{
    int arr[] = {4, 23, 534, 76, 12, 76, 232, 98232, 1234};
    int size = sizeof(arr)/sizeof(arr[0]);

    radixsort(arr, size);

    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}
