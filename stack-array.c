#include <stdio.h>
#include <stdlib.h>

struct stack{
    int arr[5];
    int size;
    int tail;
};

int add(struct stack* s, int element);
int removeElement(struct stack* s);
int retrieve(struct stack* s);

int main()
{
    struct stack* s = malloc(sizeof(struct stack));
    s -> arr[5];
    s -> size = sizeof(s -> arr)/sizeof(s -> arr[0]);
    s -> tail = 0;
    add(s, 1);
    add(s, 2);
    add(s, 3);
    add(s, 4);
    printf("%d ", removeElement(s));
    printf("%d ", retrieve(s));
    
    for(int i = 0; i < s -> tail; i++){
        printf("%d ", s -> arr[i]);
    }

    return 0;
}

int add(struct stack* s, int element){
    if(s -> tail != s -> size){
        s -> arr[s -> tail] = element;
        s -> tail++;
        return element;
    }
    return -1;
}


int removeElement(struct stack* s){
    if(s -> tail != 0){
        int temp = s -> arr[s -> tail - 1];
        s -> tail--;
        return temp;
    }
    return -1;
}

int retrieve(struct stack* s){
    if(s -> tail != 0){
        return s -> arr[s -> tail - 1];
    }
    return -1;
}


