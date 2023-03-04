#include <stdio.h>
#include <math.h>
int main()
{
   int arr[] = {8, 3, 1, 7, 5};
   int num = 8;
   int p = 0;
   int count = sizeof(arr)/sizeof(arr[0]) - 1;
   for(int x = 0; x <= count; x++){
       if(arr[x] == num){
           p = 1;
           break;
       }
   }
   
   if(p == 1)
   printf("TRUE");
   else 
   printf("FALSE");
   
   
    return 0;
}
