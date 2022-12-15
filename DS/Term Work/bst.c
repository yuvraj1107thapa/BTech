#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
    int data;
    struct node *left, *right;
};

int max(int a, int b) {
    if(a < b) return b;
    return a;
}

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

int height(struct node* root) {
    if(root == NULL)
        return 0;
    return 1 + max(height(root->right), height(root->left));
}

int countNodes(struct node* root) {
    if(root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countRightSubtreeNodes(struct node* root) {
    if(root == NULL)
        return 0;
    else {
        return countNodes(root->right);
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
        printf("%d is present in the BST.\n", val);
    } else {
        printf("%d is not present in the BST.\n", val);
    }
    printf("Height of BST: %d\n", height(root));
    printf("Number of nodes in BST: %d\n", countNodes(root));
    printf("Number of nodes in right subtree of BST: %d\n", countRightSubtreeNodes(root));

    return 0;
}