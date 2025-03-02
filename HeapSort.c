#include <stdio.h>

void heapify(int* arr, int n, int size){
  if(2*n+1 >= size) return;
  int max = 0;
  int temp = 0;
  if(2*n+2 >= size){
    max = 2*n+1;
  } else if(*(arr+(2*n+1)) > *(arr+(2*n+2))){
    max = 2*n+1;
  } else{
    max = 2*n+2;
  }
  if(*(arr+n) < *(arr+max)){
    temp = *(arr+n);
    *(arr+n) = *(arr+max);
    *(arr+max) = temp;
    heapify(arr, max, size);
  }
}

void hsort(int* arr, int size){
  for(int i = size/2; i >= 0; i--){
    heapify(arr, i, size);
  }
  for(int i = 0; i < size-1; i++){
    int temp = *(arr);
    *(arr) = *(arr+(size-1-i));
    *(arr+(size-1-i)) = temp;
    heapify(arr, 0, size-i-1);
  }
}

int main()
{
    int arr[] = {4, 23, 534, 76, 12, 76, 232, 98, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    hsort(arr, size);
    for(int i = 0; i < size; i++){
      printf("%d, ", arr[i]);
    }
}