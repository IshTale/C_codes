#include <stdio.h>
#include <math.h>
int main()
{
    int num = 11235;
    int z = 0;
    int n = num; 
    int y = z+2;
    int x = z+1;
    int size;
    for(size = 0; num != 0;){
        num /= 10;
        size++;
    }
    int arr[size];
    int i;
    int m;
    for(i = 0; i < size; i++){
        arr[i] = n % 10;
        n /= 10;
    }
    for(z = 0; y < size; z++){
        y = z+2;
        x = z+1;
        if(arr[x] + arr[y] == arr[z])
            m = 1;
        else 
            break;
    }
    if(m == 1){
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}
