#include <stdio.h>

int main()
{
    int arr [] = {1, 3, 5, 7, 8};
    int num = 6;
    int count = sizeof(arr)/sizeof(arr[0]) - 1;
    for(int x = 0; x <= count; x++){
        for(int y = x + 1; y <= count; y++){
            if(arr[x] + arr[y] == num)
            printf("Pos - %d, %d, Num - %d, %d \n", x, y, arr[x], arr[y]);
        }
    }

    return 0;
}

