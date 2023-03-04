#include <stdio.h>
#include <conio.h>

int main()
{
    int rows;
    int cols;
    int rows1;
    int cols1;
    int c = 0;
    int b;
    int a;
    printf("Number of rows for First Matrix: ");
    scanf(" %d", &rows);
    printf("\nNumber of columns First Matrix: ");
    scanf("%d", &cols);
    printf("\nNumber of rows for Second Matrix: ");
    scanf(" %d", &rows1);
    printf("\nNumber of columns Second Matrix: ");
    scanf("%d", &cols1);
    if(cols != rows1){
        printf("undefined");
        return 0;
    }
    int mat_1 [rows][cols];
    int mat_2 [cols1][rows1];
    int mat_3 [rows1][cols1];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("\nEnter number for Matrix 1 [%d, %d]: ", i+1, j+1);
            scanf("%d", &mat_1[i][j]);
        }
    }
    for(int a = 0; a < rows1; a++){
        for(int b = 0; b < cols1; b++){
            printf("\nEnter number for Matrix 2 [%d, %d]: ", a+1, b+1);
            scanf("%d", &mat_3[a][b]);
        }
    }
    printf("\nFirst Matrix is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", mat_1[i][j]);
            if(j == cols - 1)
                printf("\n");
        }
    }
    printf("\nSecond Matrix is: \n");
    for(int a = 0; a < rows1; a++){
        for(int b = 0; b < cols1; b++){
            printf("%d ", mat_3[a][b]);
            if(b == cols1 - 1)
                printf("\n");
        }
    }
    
    
    
    
    
    printf("\nMultiplication of the Matrices is: \n");
    b = 0;
    for(int i = 0; i < rows1; i++){
        a = 0;
        for(int j = 0; j < cols1; j++){
            mat_2[a][b] = mat_3[i][j];
            a++;
        }
        b++;
    }
    
    
    for(int i = 0; i < rows; i++){
        for(a = 0; a < cols1; a++){
            b = 0;
            for(int j = 0; j < cols; j++){
                c += mat_1[i][j] * mat_2[a][b];
                b++;
            }
            printf("%d ", c);
            c = 0;
        }
        printf("\n");
    }
    

    return 0;
}




