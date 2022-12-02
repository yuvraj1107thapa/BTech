#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void display();
void insert_end(char c);

struct node* head = NULL;
struct node {
	char data;
	struct node* next;
};

int main() {
    char ch[] = "YUVRAJTHAPA";
    for (int i = 0; i < strlen(ch); i++) {
        for (int j = i; j < strlen(ch); j++) {
            if(ch[i] > ch[j]) {
                char temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        }
        insert_end(ch[i]);
    }
    display();
}

void display() {
	if(head==NULL) {
		printf("Linked List is Empty\n");
		return;
	}
    printf("LinkedList: ");
	struct node* ptr = head;
	while(ptr!=NULL)  {
		printf("%c ",ptr->data);
		ptr = ptr->next;
	}
    printf("\n");
}

void insert_end(char c) {
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
    temp->data = c;
    temp->next = NULL;
	if(head==NULL) {
		head = temp; 
	    return;
	}
	else {
		struct node* ptr = head;  
		while(ptr->next!=NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
}
