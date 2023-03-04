#include <stdio.h>
#include <ctype.h>

int main()
{
    char str [20] = {"I,    dont; know  "};
    int i;
    for(i = 0; i < 20; i++){
        if(isalpha(str[i])){
            printf("%c", str[i]);
            if(isalpha(str[i+1]));
            else
                printf("\n");
        }
    }

    return 0;
}
