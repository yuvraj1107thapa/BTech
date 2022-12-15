#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int val;
    struct node *next;
    struct node *prev;
};

// struct node *head = NULL;

void insertAtHead(struct node* head, int data) {
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->val = data;
    n->prev = NULL;
    n->next = NULL;
    if(head == NULL) {
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}

void insertNode(struct node* head, int data) {
    if(head == NULL) {
        insertAtHead(head, data);
        return;
    }
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->val = data;
    n->prev = n->next = NULL;
    struct node *temp = head;
    while(temp && temp->next) {
        if(temp->next && temp->next->val > data) {
            break;
        }
        temp = temp->next;
    }
    if(temp->next == NULL) {
        temp->next = n;
        n->prev = temp;
    } else {
        struct node *tempy = temp->next;
        temp->next = n;
        n->prev = temp;
        n->next = tempy;
        tempy->prev = n;
    }
}

void deleteAtHead(struct node* head) {
    if(head == NULL) {
        printf("Linked list is empty!\n");
        return;
    } else if(head->next == NULL) {
        head = NULL;
        return;
    }
    struct node *temp = head;
    head->next->prev = NULL;
    head = head->next;
    free(temp);
}

void deleteAtPos(struct node* head, int pos) {
    if(pos == 1) {
        deleteAtHead(head);
        return;
    }
    int count = 1;
    struct node *temp = head;
    while(temp->next != NULL) {
        if(count == pos) {
            break;
        }
        temp = temp->next;
        count++;
    }
    if(count != pos) {
        printf("Given pos is out of range. No node deleted!\n");
        return;
    }
    if(temp->next == NULL) {
        temp->prev->next = NULL;
        free(temp);
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}
void display(struct node* head) {
    struct node *temp = head;
    if(head == NULL) {
        printf("Linked list is empty!\n");
    }
    while(temp != NULL) {
        printf("%d ->", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void evenOdd(struct node* head) {
    struct node *evenHead = (struct node *)malloc(sizeof(struct node));
    struct node *oddHead = (struct node *)malloc(sizeof(struct node));
    struct node *evenEnd = (struct node *)malloc(sizeof(struct node));
    struct node *oddEnd = (struct node *)malloc(sizeof(struct node));
    evenHead = NULL;
    evenEnd = NULL; 
    oddHead = NULL;
    oddEnd = NULL;
    struct node *temp = head;
    while(temp != NULL) {
        struct node *n = temp;
        temp = temp->next;
        n->prev = NULL;
        n->next = NULL;
        if(n->val % 2 == 0) {
            if(evenHead == NULL) {
                evenHead = n;
                evenEnd = n;
            } else {
                n->prev = evenEnd;
                evenEnd->next = n;
                evenEnd = evenEnd->next;
            }
        } else {
            if(oddHead == NULL) {
                oddHead = n;
                oddEnd = n;
            } else {
                n->prev = oddEnd;
                oddEnd->next = n;
                oddEnd = oddEnd->next;
            } 
        }
    }
    oddEnd->next = NULL;
    evenEnd->next = NULL;
    display(oddHead);
    display(evenHead);
    evenEnd->next = oddHead;
    oddHead->prev = evenEnd;
    head = evenHead;
}


int main() {
    struct node *one = (struct node*)malloc(sizeof(struct node));
    one->val = 1;
    one->prev = NULL;
    one->next = NULL;
    struct node *head = NULL;
    head = one;
    insertNode(head, 5);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 2);
    display(head);
    return 0;
}