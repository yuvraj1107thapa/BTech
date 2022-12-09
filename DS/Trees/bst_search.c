#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* insert(struct node* root, int val) {
    if(root == NULL) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node *));
        newNode->data = val;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    else if(root->data > val) {
        root->left = insert(root->left, val);
    }
    else if(root->data < val) {
        root->right = insert(root->right, val);
    }
    return root;
}

struct node* search(struct node* root, int val) {
    if(root == NULL) {
        return NULL;
    }
    if(root->data == val) {
        return root;
    }
    else if(root->data > val) {
        return search(root->left, val);
    } 
    else {
        return search(root->right, val);
    }
}

void inorder(struct node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct node *root = NULL;
    root = insert(root, 10);
    insert(root, 20);
    insert(root, 5);
    insert(root, 15);
    insert(root, 1);
    inorder(root);
    int val;
    printf("\nEnter a value for search: ");
    scanf("%d", &val);
    if(search(root, val) != NULL) {
        printf("%d is present in the BST.", val);
    } else {
        printf("%d is not present in the BST.", val);
    }
    return 0;
}