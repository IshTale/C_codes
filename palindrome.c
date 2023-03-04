#include <stdio.h>
#include <string.h> 

int main()
{
    char str [] = "ABCBA";
    int count = strlen(str) - 1;
    int x = 0;
    int p = 0;
    for(int y = count; y > x; y--){
        if(str[y] == str[x])
            p = 1;
        else{
            p = 0;
            break;
        } 
        x++;
        }
    
    
    if(p == 1)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
    

    return 0;
}
