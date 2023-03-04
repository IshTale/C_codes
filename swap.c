#include <stdio.h>

int* swap(int first, int second, int arr[]){
    int x = first;
    first = second;
    second = x;
    arr[0] = first;
    arr[1] = second;
    return arr;
}

int main()
{
    int x = 78;
    int y = 89;
    int* p;
    int arr[2];
    p = swap(x, y, arr);
    printf("x is %d, y is %d", *(p), *(p + 1));

    return 0;
}
