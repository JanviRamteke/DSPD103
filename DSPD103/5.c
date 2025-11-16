// Write a program to insert Number of Nodes in the Binary Tree and Traverse in Inorder , Preorder and Post Order and  Search an element in Binary Tree(Display NULL if not found, If found Display Found)


#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
struct node* insert(struct node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    int choice;
    printf("Insert %d to left(1) or right(2) of %d? ", data, root->data);
    scanf("%d", &choice);
    if (choice == 1)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}
void inorder(struct node* root) {
    if (root == NULL) 
    return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct node* root) {
    if (root == NULL)
     return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root) {
    if (root == NULL)
     return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int search(struct node* root, int key) {
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;
    return search(root->left, key) || search(root->right, key);
}
int main() {
    struct node* root = NULL;
    int n, data, key;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter data for root: ");
        scanf("%d", &data);
        root = createNode(data);
        for (int i = 1; i < n; i++) {
            printf("Enter next value: ");
            scanf("%d", &data);
            root = insert(root, data);
        }
    }
    printf("\nInorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\n\nEnter element to search: ");
    scanf("%d", &key);
    if (search(root, key))
        printf("Found\n");
    else
        printf("NULL\n");
    return 0;
}
// OUTPUT
// Enter number of nodes: 4
// Enter data for root: 34
// Enter next value: 12
// Insert 12 to left(1) or right(2) of 34? 1
// Enter next value: 33
// Insert 33 to left(1) or right(2) of 34? 2
// Enter next value: 56
// Insert 56 to left(1) or right(2) of 34? 2
// Insert 56 to left(1) or right(2) of 33? 2

// Inorder: 12 34 33 56
// Preorder: 34 12 33 56
// Postorder: 12 56 33 34

// Enter element to search: 33
// Found