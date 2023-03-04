#include <stdio.h>
#include <stdlib.h>


struct node{
    int element;
    struct node* next;
};
struct node* start =  NULL;
void scan();
void deleteAtIndex(int index);
void insertAtIndex(int index, int e);
void update(int element, int newElement);

int main()
{
    insertAtIndex(0, 1);
    insertAtIndex(1, 2);
    insertAtIndex(2, 3);
    insertAtIndex(3, 4);
    deleteAtIndex(3);
    update(3, 7);
    
    scan();
    
    return 0;
}

void scan(){
    extern struct node* start;
    struct node* ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr -> element);
        ptr = ptr -> next;
    }
    return;
}

void insertAtIndex(int index, int e){
    struct node* ptr = start;
    struct node* new = (struct node*) malloc(sizeof(struct node));
    new -> element = e;
    if(start == NULL){
        start = new;
        new -> next = NULL;
        return;
    }
    
    if(index == 0){
        new -> next = ptr;
        start = new;
        return;
    }
    int counter = 1;
    while(ptr -> next != NULL){
        if(counter == index){
            new -> next = ptr -> next;
            ptr -> next = new;
            return;
        }
        ptr = ptr -> next;
        counter++;
    }
    if(counter <= index){
        new -> next = NULL;
        ptr -> next = new;
    }
    return;
}

void deleteAtIndex(int index){
    struct node* ptr = start;
    if(start == NULL){
        return;
    }
    
    if(index == 0){
        struct node* delete = start;
        start = delete -> next;
        free(delete);
        return;
    }
    int counter = 1;
    while(ptr -> next -> next != NULL){
        if(counter == index){
            struct node* delete = ptr -> next;
            ptr -> next = delete -> next;
            free(delete);
            return;
        }
        ptr = ptr -> next;
        counter++;
    }
    if(counter == index){
        struct node* delete = ptr -> next;
        ptr -> next = NULL;
        free(delete);
    }
    return;
}

void update(int element, int newElement){
    struct node* ptr = start;
    while(ptr != NULL){
        if(ptr -> element == element){
            ptr -> element = newElement;
            return;
        }
        ptr = ptr -> next;
    }
    return;
}

