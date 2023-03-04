#include <stdio.h>

int
main ()
{
    int num = 100;
    int x = 2;
    int y = 2;
    int i;
    int counter;
    for(x = 2; x <= num; x++){
        y = 2;
        i = 2;
        while(y < x){
                if(x % y == 0){
                    i = 1;
                    break;
                }
                y++;
        }
        if(i == 2)
            printf("%d ", x);
    }

  return 0;
}
