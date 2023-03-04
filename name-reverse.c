#include <stdio.h>

int i = 6;

void name_reverse(){
    char arr[7] = "Someone";
    if(i < 0);
    else{
        printf("%c", arr[i]);
        i--;
        name_reverse();
    }
}

int main()
{
    name_reverse();

    return 0;
}
