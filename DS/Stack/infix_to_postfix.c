// Implementing Static Stack using an Array in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// N will be the capacity of the Static Stack
#define N 1000

// Initializing the top of the stack to be -1
int top = -1;

// Initializing the stack using an array
int stack[N];

// Function prototypes
void push(char c);       // Push element to the top of the stack
char pop();         // Remove and return the top most element of the stack
char peek();        // Return the top most element of the stack
bool isEmpty();    // Check if the stack is in Underflow state or not


/* This function returns the relative precedance of the operators we have */
/* e.g divide (/) has higher precedance than multiply (*) */
int precedence (char c) {
	if (c == '^') {
		return 3;
    }
	else if (c == '/' || c == '*') {
		return 2;
    }
	else if (c == '+' || c == '-') {
		return 1;
    }
	else {
        return 0;
    }
}

/*Function check whether the given character is Operand or not*/
int isOperand (char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
		return 1;
	}
	return 0;
}

/*Function for converting a infix expression to postfix expression*/
void infixToPostfix (char s[], int n) {
	char postFix[n];
	int index = 0;

	for(int i = 0; i < n; i++) {
		if (isOperand(s[i])) {
            postFix[index++] = s[i];
        }
		else if (s[i] == '(') {
			push('(');
        }
		else if (s[i] == ')') {
			while(peek() != '(') {
				postFix[index++] = peek();
				pop();
			}
			pop();
		}
		else {
			while (!isEmpty() && precedence(s[i]) <= precedence(peek())) {
				postFix[index++] = peek();
				pop();
			}
			push(s[i]);
		}
    }

	while (isEmpty()) {
		postFix[index++] = pop();
		pop();
	}

    printf("PostFix expression : %s", postFix);
	return;
}

int main() {
    char infix[] = "(1-2/3)*(1/5-7)";
    printf("Infix expression : %s\n", infix);
    infixToPostfix(infix, strlen(infix)+1);
    return 0;
}


void push(char c){
    if(top == N-1)
        printf("Overflow State: can't add more elements into the stack\n");
    else{
        top+=1;
        stack[top] = c;
    }
}

char pop(){
    // Checking underflow state
    if(top == -1) {}
    else{
        char x = stack[top];
        top-=1;
        return x;
    }
    return -1;
}

char peek(){
    char x = stack[top];
    return x;
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}