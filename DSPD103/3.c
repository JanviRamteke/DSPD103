// Design, Develop and Implement a menu driven Program in C for the following operations on QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
// a. Insert an Element on to QUEUE
// b. Delete an Element from QUEUE
// c. Demonstrate Overflow and Underflow situations on QUEUE
// d. Display the status of QUEUE
// e. Exit
// Support the program with appropriate functions for each of the above operations.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
char Q[MAX];
int front = 0, rear = -1;
void ENQ(char value) {
    if (rear == MAX - 1) {
        printf("\nQueue Overflow! Cannot insert '%c'\n", value);
    } else {
        rear++;
        Q[rear] = value;
        printf("\n'%c' inserted into queue\n", value);
    }
}
void DQ() {
    if (front > rear) {
        printf("\nQueue Underflow! Cannot delete\n");
    } else {
        char value = Q[front];
        front++;
        printf("\n'%c' deleted from queue\n", value);
    }
}
void displayQ() {
    if (front > rear) {
        printf("\nQueue is empty\n");
    } else {
        printf("\nQueue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%c ", Q[i]);
        }
        printf("\n");
    }
}
void demoOverflowUnderflow() {
    printf("\n--- Demonstrating Overflow ---\n");
    for (int i = 0; i < MAX + 1; i++) {
        ENQ('A' + i); 
    }

    printf("\n--- Demonstrating Underflow ---\n");
    while (front <= rear) {
        DQ();
    }
    DQ();
}

int main() {
    int choice;
    char value;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Demonstrate Overflow/Underflow\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter a character to insert: ");
            scanf(" %c", &value); // space before %c to skip whitespace
            ENQ(value);
            break;
        case 2:
            DQ();
            break;
        case 3:
            demoOverflowUnderflow();
            break;
        case 4:
            displayQ();
            break;
        case 5:
            printf("\nExiting program...\n");
            exit(0);
        default:
            printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
// OUTPUT
// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 1
// Enter a character to insert: a

// 'a' inserted into queue

// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 1
// Enter a character to insert: e

// 'e' inserted into queue

// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 1
// Enter a character to insert: r

// 'r' inserted into queue

// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 2

// 'a' deleted from queue

// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 3

// --- Demonstrating Overflow ---

// 'A' inserted into queue

// 'B' inserted into queue

// Queue Overflow! Cannot insert 'C'

// Queue Overflow! Cannot insert 'D'

// Queue Overflow! Cannot insert 'E'

// Queue Overflow! Cannot insert 'F'

// --- Demonstrating Underflow ---

// 'e' deleted from queue

// 'r' deleted from queue

// 'A' deleted from queue

// 'B' deleted from queue

// Queue Underflow! Cannot delete

// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 4

// Queue is empty

// --- Queue Menu ---
// 1. Insert an element
// 2. Delete an element
// 3. Demonstrate Overflow/Underflow
// 4. Display Queue
// 5. Exit
// Enter your choice: 5

// Exiting program...