// Evaluation of Postfix expression

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// N will be the capacity of the Static Stack
#define N 1000

// Initializing the top of the stack to be -1
int top = -1;

// Initializing the stack using an array
int stack[N];

// Function prototypes
void push(int val);       // Push element to the top of the stack
int pop();         // Remove and return the top most element of the stack

int postfixEvaluation(char postfix[]) {
    int i = 0;
    int size = strlen(postfix);
    while(i < size) {
        char ch = postfix[i];
        if(isdigit(ch)) {
            push(ch-'0');
        } else {
            int opr2 = pop();
            int opr1 = pop();
            if(ch == '+')
                push(opr1 + opr2);
            else if(ch == '-')
                push(opr1 - opr2);
            else if(ch == '*')
                push(opr1 * opr2);
            else push(opr1/opr2);
        }
        i++;
    }
    return pop();
}

int main(){
    char postfix[30];
    strcpy(postfix, "46+2/5*7+");
    printf("Postfix: %s\n", postfix);
    printf("Evaluation of posftix expression: %d", postfixEvaluation(postfix));
    return 0;
}

void push(int val){
    // Checking overflow state
    if(top == N-1) {}
    else{
        top+=1;
        stack[top] = val;
    }
}

int pop(){
    // Checking underflow state
    if(top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else{
        int x = stack[top];
        top-=1;
        return x;
    }
    return -1;
}