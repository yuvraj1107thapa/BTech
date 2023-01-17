#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int val;
    struct node *next;
    struct node *prev;
};

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

void insertAtEnd(struct node* head, int data) {
    if(head == NULL) {
        insertAtHead(head, data);
        return;
    }
    struct node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->val = data;
    n->prev = NULL;
    n->next = NULL;
    temp->next = n;
    n->prev = temp;
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

void split(struct node* head, struct node* evenHead, struct node* oddHead) {
    struct node *evenHeadPtr = (struct node *)malloc(sizeof(struct node));
    struct node *oddHeadPtr = (struct node *)malloc(sizeof(struct node));
    struct node *evenEnd = (struct node *)malloc(sizeof(struct node));
    struct node *oddEnd = (struct node *)malloc(sizeof(struct node));
    evenHeadPtr = NULL;
    evenEnd = NULL; 
    oddHeadPtr = NULL;
    oddEnd = NULL;
    struct node *temp = head;
    int index = 0;
    while(temp != NULL) {
        struct node *n = temp;
        temp = temp->next;
        n->prev = NULL;
        n->next = NULL;
        if(index % 2 == 0) {
            if(evenHeadPtr == NULL) {
                evenHeadPtr = n;
                evenEnd = n;
            } else {
                n->prev = evenEnd;
                evenEnd->next = n;
                evenEnd = evenEnd->next;
            }
        } else {
            if(oddHeadPtr == NULL) {
                oddHeadPtr = n;
                oddEnd = n;
            } else {
                n->prev = oddEnd;
                oddEnd->next = n;
                oddEnd = oddEnd->next;
            } 
        }
        index++;
    }
    oddEnd->next = NULL;
    evenEnd->next = NULL;
    oddHead->next = oddHeadPtr;
    oddHeadPtr->prev = oddHead;
    evenHead->next = evenHeadPtr;
    evenHeadPtr->prev = evenHead;
}


int main() {
    struct node *one = (struct node*)malloc(sizeof(struct node));
    struct node *two = (struct node*)malloc(sizeof(struct node));
    struct node *three = (struct node*)malloc(sizeof(struct node));
    one->val = 1;
    two->val = 2;
    three->val = 3;
    one->prev = NULL;
    two->prev = one;
    three->prev = two;
    one->next = two;
    two->next = three;
    three->next = NULL;
    struct node *head = NULL;
    head = one;
    insertAtHead(head, 0);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    printf("Linked list: "); 
    display(head);
    struct node *evenHead = (struct node *)malloc(sizeof(struct node));
    struct node *oddHead = (struct node *)malloc(sizeof(struct node));
    evenHead->val = -1;
    oddHead->val = -1;
    split(head, oddHead, evenHead);
    printf("Split linked list in two linked list Q & R from P.\n");
    printf("Linked list Q with all elements in odd positon: ");
    display(evenHead->next);
    printf("Linked list R with all elements in even positon: ");
    display(oddHead->next);
    return 0;
}