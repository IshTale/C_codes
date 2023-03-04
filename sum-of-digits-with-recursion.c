
#include <stdio.h>

int sum1;

void sum_of_num (int n, int sum){
    sum += n % 10;
    n /= 10;
    sum1 = sum;
    if(n > 0)
        sum_of_num (n, sum);
        
}

int main()
{
    int n = 456;
    sum1 = 0;
    sum_of_num (n, sum1);
    printf("%d", sum1);
    return 0;
}
