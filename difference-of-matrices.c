#include <stdio.h>
#include <conio.h>

int main()
{
    int rows;
    int cols;
    int i;
    int j;
    int a;
    int b;
    printf("Number of rows: ");
    scanf(" %d", &rows);
    printf("\nNumber of columns: ");
    scanf("%d", &cols);
    int matrix_1 [rows][cols];
    int matrix_2 [rows][cols];
    int dif [rows][cols];
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("\nEnter number for matrix 1 [%d, %d]: ", i+1, j+1);
            scanf("%d", &matrix_1[i][j]);
        }
    }
    for(a = 0; a < rows; a++){
        for(b = 0; b < cols; b++){
            printf("\nEnter number for matrix 2 [%d, %d]: ", a+1, b+1);
            scanf("%d", &matrix_2[a][b]);
        }
    }
    printf("\nFirst Matrix is: \n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", matrix_1[i][j]);
            if(j == cols - 1)
                printf("\n");
        }
    }
    printf("\nSecond Matrix is: \n");
    for(a = 0; a < rows; a++){
        for(b = 0; b < cols; b++){
            printf("%d ", matrix_2[a][b]);
            if(b == cols - 1)
                printf("\n");
        }
    }
    printf("\nDifferences of Matrices is: \n");
    for(a = 0; a < rows; a++){
        for(b = 0; b < cols; b++){
            dif[a][b] = matrix_2[a][b] - matrix_1[a][b];
            printf("%d ", dif[a][b]);
            if(b == cols - 1)
                printf("\n");
        }
    }
    

    return 0;
}
