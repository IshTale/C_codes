#include <stdio.h>

void mergeSort(int arr[], int start, int end);
void merge(int arr[], int s1, int e1, int s2, int e2);

int main()
{
    
    int arr[6] = {2374, 234, 83274, 2834, 2384, 324};
    mergeSort(arr, 0,(sizeof(arr)/sizeof(arr[0])) - 1);
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

void mergeSort(int arr[], int start, int end){
    if(start == end){
        return;
    }
    int a = (start + end)/2;
    mergeSort(arr, start, a);
    mergeSort(arr, a + 1, end);
    merge(arr, start, a, a + 1, end);
    return;
}

void merge(int arr[], int s1, int e1, int s2, int e2){
    int i = s1;
    int j = s2;
    while(i <= e1){
        int a = 0;
        j = s2;
        while(j <= e2 && a == 0){
            if(arr[i] > arr[j]){
                int x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
                a = 1;
                for(int k = j + 1; k <= e2; k++){
                    if(arr[k] < arr[k - 1]){
                        x = arr[k - 1];
                        arr[k - 1] = arr[k];
                        arr[k] = x;
                    }
                }
            }
            j++;
        }
        i++;
    }
    
}




