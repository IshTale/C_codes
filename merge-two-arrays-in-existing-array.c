#include <stdio.h>


int main()
{
    int a = 0;
    int arr1[3] = {2, 4, 5};
    int arr2[6] = {3, 6, 8};
    int i = 0;
    int j = 0;
    int x;
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    while(j < size2){
        if(j = size2 - size1 - a){
            arr2[j] = arr1[i];
            i++;
            j++;
            a++;
            break;
        }
        if(arr1[0] < arr2[j]){
            x = arr2[j];
            arr2[j] = arr1[0];
            for(int k = j; k > 0; k--){
                if(arr1[k] <= arr1[k - 1]){
                    x = arr1[k];
                    arr1[k] = arr1[k - 1];
                    arr1[k - 1] = x;
                }
                else 
                    break;
            }
            a++;
        }
        j++;
    }
    for(i = 0; i < size2; i++){
        printf("%d", arr2[i]);
    }

    return 0;
}
