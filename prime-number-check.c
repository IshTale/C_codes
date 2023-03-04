#include <stdio.h>

int main()
{
    int num = 19;
    int i;
    int arr[num - 2];
    for(int z = 2; z != num; z++){
        if(num % z == 0){
            i = 0;
            break;
        }
    }
    if(i == 0)
        printf("No");
    else
        printf("Yes");
 
    return 1;
}

