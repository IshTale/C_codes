#include <stdio.h>
#include <stdlib.h>

struct node{
    int element;
    struct node* next;
    struct node* prev;
};
struct node* start =  NULL;
struct node* end =  NULL;

void scanFrontToBack();

void scanBackToFront();

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
    scanFrontToBack();
    printf("\n");
    scanBackToFront();
    
    return 0;
}

void scanFrontToBack(){
    extern struct node* start;
    struct node* ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr -> element);
        ptr = ptr -> next;
    }
    return;
}

void scanBackToFront(){
    extern struct node* end;
    struct node* ptr = end;
    while(ptr != NULL){
        printf("%d ", ptr -> element);
        ptr = ptr -> prev;
    }
    return;
}

void insertAtIndex(int index, int e){
    extern struct node* start;
    extern struct node* end;
    struct node* ptr = start;
    struct node* new = (struct node*) malloc(sizeof(struct node));
    new -> element = e;
    if(start == NULL){
        new -> next = NULL;
        new -> prev = NULL;
        start = new;
        end = new;
        return;
    }
    
    if(index == 0){
        ptr -> prev = new;
        new -> next = ptr;
        start = new;
        return;
    }
    int counter = 1;
    while(ptr -> next != NULL){
        if(counter == index){
            new -> prev = ptr;
            new -> next = ptr -> next;
            ptr -> next -> prev = new;
            ptr -> next = new;
            return;
        }
        ptr = ptr -> next;
        counter++;
    }
    if(counter <= index){
        new -> next = NULL;
        ptr -> next = new;
        new -> prev = ptr;
        end = new;
    }
    return;
}

void deleteAtIndex(int index){
    extern struct node* start;
    extern struct node* end;
    struct node* ptr = start;
    if(start == NULL){
        return;
    }
    
    if(index == 0){
        struct node* delete = start;
        ptr -> next -> prev = NULL;
        start = ptr -> next;
        free(delete);
        return;
    }
    int counter = 1;
    while(ptr -> next -> next != NULL){
        if(counter == index){
            struct node* delete = ptr -> next;
            delete -> next -> prev = ptr;
            ptr -> next = delete -> next;
            free(delete);
            return;
        }
        ptr = ptr -> next;
        counter++;
    }
    if(counter == index){
        struct node* delete = ptr -> next;
        end = ptr;
        ptr -> next = NULL;
        free(delete);
    }
    return;
}

void update(int element, int newElement){
    extern struct node* start;
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

