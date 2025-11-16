// This C program creates a linked list to store integer elements. It prompts the user to enter elements and add them to the list until the user enters 0. It then traverses the list and prints each element and "=>" until reaching the null pointer. Finally, it displays the number of nodes in the list.
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* link;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->link = NULL;
    return newNode;
}
int main() {
    struct Node* head = NULL;
    struct Node* next = NULL;
    int value, count = 0;
    printf("Enter integers to add to the list (enter 0 to stop):\n");
    while (1) {
        scanf("%d", &value);
        if (value == 0) break; 
        struct Node* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;   
            next = newNode;   
        } else {
            next->link = newNode; 
            next = newNode;       
        }count++;
    }
    printf("\nLinked List:\n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d => ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
    printf("Number of nodes in the list: %d\n", count);
    return 0;
}
// OUTPUT
// Enter integers to add to the list (enter 0 to stop):
// 3
// 4
// 5
// 6
// 7
// 0

// Linked List:
// 3 => 4 => 5 => 6 => 7 => NULL
// Number of nodes in the list: 5