#include <stdio.h>
#include <stdlib.h>

struct node{
    int element;
    struct node* next;
    struct node* prev;
};
struct node* head = NULL;
struct node* tail = NULL;

int push(int element);
void scan();
int retrieve();
int pop();


int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("poped %d \n", pop());
    printf("retrieved %d \n", retrieve());
    scan();

    return 0;
}
void scan(){
    extern struct node* head;
    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr -> element);
        ptr = ptr -> next;
    }
    
    return;
}

int retrieve(){
    extern struct node* tail;
    if(tail != NULL){
        return tail -> element;
    }
    return -1;
}

int push(int element){
    extern struct node* head;
    extern struct node* tail;
    struct node* new = (struct node*) malloc(sizeof(struct node));
    new -> element = element;
    new -> next = NULL;
    if(head == NULL){
        head = new;
        tail = new;
        new -> prev = NULL;
        return element;
    }
    else{
        tail -> next = new;
        new -> prev = tail;
        tail = new;
        return element;
    }
}

int pop(){
    extern struct node* head;
    extern struct node* tail;
    if(tail != NULL){
        struct node* ptr = tail;
        int temp = tail -> element;
        tail = tail -> prev;
        tail -> next = NULL;
        free(ptr);
        return temp;
    }
    return -1;
}





