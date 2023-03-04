#include <stdio.h>

int main(){

    int arr1 [4][2] = { {1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int arr2 [2][3] = { {1, 2, 3}, {4, 5, 6}};
    int sum = 0;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            for(int a = 0; a < 2; a++){
                sum += arr1[i][a] * arr2[a][j];
            }
            printf("%d ", sum);
            sum = 0;
        }
        printf("\n");
    }
    
    return 0;
}

