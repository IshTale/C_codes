#include <stdio.h>

int main()
{
    int size;
    int i;
    int k;
    int b;
    int charsize;
    scanf("%d \n", &size);
    scanf("%d \n", &charsize);
    int j;
    char arr[size][charsize];
    for(i = 0; i < size; i++){
        scanf("%s \n", arr[i]);
    }
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            b = 2;
            for(k = 0; arr[i][k] != '\0' || arr[j][k] != '\0'; k++){
                    b = 2;
                    if(arr[i][k] != arr[j][k]){
                        b = 1;
                        break;
                }
            }
            if(b == 2)
                printf("Pos - %d, %d ", i, j);
        }
    }


    
    return 0;
}





