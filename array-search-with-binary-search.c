#include <stdio.h>

int binary_search(int start, int end, int arr[], int num);

int main()
{
    int arr[6] = {4,8,9,15,20,29};
    int end = sizeof(arr)/sizeof(arr[0]);
    
    if(binary_search(0, end, arr, 20) == 1){
        printf("20 Exists\n");
    }
    if(binary_search(0, end, arr, -1) == 1){
        printf("-1 Exists\n");
    }
    if(binary_search(0, end, arr, 30) == 1){
        printf("30 Exists\n");
    }
    if(binary_search(0, end, arr, 15) == 1){
        printf("15 Exists\n");
    }
    
    
}

int binary_search(int start, int end, int arr[], int num){
    while(start <= end){
        int k = (start+end)/2;
        
        if(num > arr[k])
            start = k+1;
        else if(num < arr[k])
            end = k-1;
        else{
            return 1;
        }
        
    }
    return -1;
}
