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

struct node* inorderSuccesor(struct node* root) {
    struct node *temp = root;
    while(temp && temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

struct node* deletion(struct node* root, int val) {
    if(root == NULL) {
        return NULL;
    }
    else if(root->data > val) {
        root->left = deletion(root->left, val);
    } 
    else if(root->data < val) {
        root->right = deletion(root->right, val);
    } 
    else {
        if(root->left == NULL && root->right == NULL ) {
            free(root);
            return NULL;
        } 
        else if(root->left == NULL || root->right == NULL) {
            struct node *temp;
            if(root->left == NULL) {
                temp = root->right;
            } else {
                temp = root->left;
            }
            free(root);
            return temp;
        }
        else {
            struct node *temp = inorderSuccesor(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
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
    printf("\n");
    root = deletion(root, 10);
    inorder(root);
    return 0;
}