#include <stdio.h>

void search(int start, int end, int arr[], int num){
    if(start>end) {
        printf("No");
        return;
    }
    int k = (start+end)/2;
    if(num > arr[k]){
        start = k+1;
        search(start, end, arr, num);
    }
    else if(num < arr[k]){
        end = k-1;
        search(start, end, arr, num);
    }
    else{
        printf("Yes");
        return;
    }
}

int main()
{
    int arr[6] = {4, 8, 9, 15, 20, 29}; 
    search(0, sizeof(arr)/sizeof(arr[0]), arr, 20);
    printf("\n");
    search(0, sizeof(arr)/sizeof(arr[0]), arr, 30);
    printf("\n");
    search(0, sizeof(arr)/sizeof(arr[0]), arr, 2);
    printf("\n");
    search(0, sizeof(arr)/sizeof(arr[0]), arr, 8);
    printf("\n");

    return 0;
}

