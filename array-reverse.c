#include <stdio.h>

int main()
{
    int a[6]={1,2,3,4,5,6};
    int x = 0;
    int j = 0;
    int i = 5;
    while(i > j){
        x = a[j];
        a[j] = a[i];
        a[i] = x;
        j++;
        i--;
    }
    
    for(i = 0; i <= 5; i++)
        printf("%d, ", a[i]);

    return 0;
}

