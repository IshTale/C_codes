#include <stdio.h>
#include <stdlib.h>

struct treeNode{
    int element;
    struct treeNode* left;
    struct treeNode* right;
};
struct treeNode *root = NULL;

void inorder(struct treeNode* start){
    if(start == NULL){
        return;
    }
    inorder(start -> left);
    printf("%d ", start -> element);
    inorder(start -> right);
}

void preorder(struct treeNode* start){
    if(start == NULL){
        return;
    }
    printf("%d ", start -> element);
    preorder(start -> left);
    preorder(start -> right);
}

void postorder(struct treeNode* start){
    if(start == NULL){
        return;
    }
    postorder(start -> left);
    postorder(start -> right);
    printf("%d ", start -> element);
}

struct treeNode* constructNode(int element) {
        struct treeNode* new =  malloc(sizeof(struct treeNode));
        new -> left = NULL;
        new -> right = NULL;
        new -> element = element;
        return new;
}

void insert(struct treeNode* start, int element){
    if(start == NULL){
        extern struct treeNode* root;
        root = constructNode(element);
        return;
    }
    if(start -> element > element){
        if(start -> left == NULL){
            start -> left = constructNode(element);
        }
        else
            insert(start -> left, element);
    }
    else{
        if(start -> right == NULL){
            start -> right = constructNode(element);
        }
        else
            insert(start -> right, element);
    }
    return;
}

int search(struct treeNode* start, int element){
    if(start == NULL){
        return 0;
    }
    if(start -> element == element){
        return 1;
    }
    else if(start -> element > element){
        search(start -> left, element);
    }
    else{
        search(start -> right, element);
    }
}

void delete(struct treeNode* ptr, struct treeNode* nPtr, int element){
    while(nPtr != NULL){
        if(nPtr -> element = element){
            break;
        }
    }
}


int main()
{
    insert(root,2);
    insert(root,3);
    insert(root,1);
    insert(root,-1);
    preorder(root);
    printf("\n%d", search(root, 3));
    return 0;
}
