// Design, Develop and Implement a menu driven Program in C for the following operations on STACK of Integers (Array Implementation of Stack with maximum size MAX) 
// a. Push an Element on to Stack 
// b. Pop an Element from Stack 
// c. Demonstrate how Stack can be used to check Palindrome 
// d. Demonstrate Overflow and Underflow situations on Stack 
// e. Display the status of Stack 
// f. Exit 
// Support the program with appropriate functions for each of the above operations.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int Stack[MAX], top = -1;
void push(int value) {
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        Stack[top] = value;
        printf("\n%d pushed into stack\n", value);
    }
}
void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Cannot pop\n");
    } else {
        int value = Stack[top];
        top--;
        printf("\n%d popped from stack\n", value);
    }
}
void display() {
    if (top == -1) {
        printf("\nStack is empty\n");
    } else {
        printf("\nStack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }
}
void checkPalindrome() {
    if (top == -1) {
        printf("\nStack is empty, cannot check palindrome\n");
        return;
    }
    int flag = 1;
    for (int i = 0; i <= top / 2; i++) {
        if (Stack[i] != Stack[top - i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("\nThe stack contents form a Palindrome\n");
    else
        printf("\nThe stack contents do NOT form a Palindrome\n");
}
int main() {
    int choice, value;
    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push an element\n");
        printf("2. Pop an element\n");
        printf("3. Check Palindrome\n");
        printf("4. Demonstrate Overflow/Underflow\n");
        printf("5. Display stack\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            checkPalindrome();
            break;
        case 4:
            printf("\nDemonstrating Overflow:\n");
            for (int i = 0; i < MAX + 1; i++) {
                push(i + 1);
            }
            while (top != -1) {
                pop();
            }
            printf("\nDemonstrating Underflow:\n");
            pop();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("\nExiting program...\n");
            exit(0);
        default:
            printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
// OUTPUT
// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 1
// Enter value to push: 3

// 3 pushed into stack

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 1
// Enter value to push: 4

// 4 pushed into stack

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 1
// Enter value to push: 6

// 6 pushed into stack

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 2

// 6 popped from stack

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 3

// The stack contents do NOT form a Palindrome

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 121

// Invalid choice! Try again.

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 5

// Stack elements: 3 4

// --- Stack Menu ---
// 1. Push an element
// 2. Pop an element
// 3. Check Palindrome
// 4. Demonstrate Overflow/Underflow
// 5. Display stack
// 6. Exit
// Enter your choice: 6

// Exiting program...