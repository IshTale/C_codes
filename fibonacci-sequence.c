#include <stdio.h>

int main()
{
    int x = 0;
    int y = 1;
    int z = 0;
    int num = 10;
    printf("%d ", x);
    printf("%d ", y);
    for(int counter = 0; counter <= num; counter++){
        z = x+y;
        x = y;
        y = z;
        printf("%d ", z);
    }

    return 0;
}
