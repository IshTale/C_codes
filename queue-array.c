#include <stdio.h>
#include <stdlib.h>

struct qArr{
    int arr[5];
    int size;
    int tail;
};
int add(struct qArr* queue, int element);
int removeElement(struct qArr* queue);
int retrieve(struct qArr* queue);

int main()
{
    struct qArr* queue = malloc(sizeof(struct qArr));
    queue -> arr[5];
    queue -> size = sizeof(queue -> arr)/sizeof(queue -> arr[0]);
    queue -> tail = 0;
    
    add(queue, 1);
    add(queue, 2);
    add(queue, 3);
    add(queue, 4);
    add(queue, 5);
    printf("%d \n", removeElement(queue));
    printf("%d \n", retrieve(queue));
    
    for(int i = 0; i < queue -> tail; i++){
        printf("%d ", queue -> arr[i]);
    }
    
    return 0;
}

int add(struct qArr* queue, int element){
    if(queue -> tail != queue -> size){
        queue -> arr[queue -> tail] = element;
        queue -> tail++;
        return element;
    }
    return -1;
}

int removeElement(struct qArr* queue){
    if(queue -> tail != 0){
        int temp = queue -> arr[queue -> tail - 1];
        queue -> tail--;
        return temp;
    }
    return -1;
}

int retrieve(struct qArr* queue){
    if(queue -> tail != 0){
        return queue -> arr[queue -> tail - 1];
    }
    return -1;
}

