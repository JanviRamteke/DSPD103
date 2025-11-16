// 5	Write a program to insert Number of Nodes in the Binary Tree and Traverse in Inorder , Preorder and Post Order and  Search an element in Binary Tree(Display NULL if not found, If found Display Found)

	

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left =NULL;
    node->right= NULL;
    return node;
}
// struct node* insertNode(struct node* root, int data){
//     if(root==NULL){
//         return newNode(data);
//     }
//     if(data<root->data){
//         root->left = insertNode(root->left,data);
//     }
//     else{
//         root->right = insertNode(root->right, data);
//     }
//     return root;
// }
struct node* insertNode(struct node* root, int data){
    if(root==NULL){
        return newNode(data);
    }
    if(data < root->data)
    root->left = insertNode(root->left, data);
    else
        root->right= insertNode(root->right,data);
    return root;
}
void postOrder(struct node*node){
    if(node==NULL)
    return;
    postOrder(node->left);
    postOrder(node->right);
    printf("%d ", node->data);
}
void InOrder(struct  node* node){
    if(node==NULL)
    return;
    InOrder(node->left);
    printf("%d ", node->data);
    InOrder(node->right);
} void PreOrder(struct node* node){
    if(node==NULL)
    return;
    printf("%d ", node->data);
    PreOrder(node->left);
    PreOrder(node->right);
}
void search(struct node* root, int key){
    if(root == NULL){
        printf("NULL\n");
        return;
    }
    if(root->data == key){
        printf("Found\n");
        return;
    }
    else if(key < root->data){
        search(root->left,key);
    } else{
        search(root->right, key);
    }
}
int main(){
    
   struct node* root = NULL;
   int n, value, key;
   printf("Enter number of nodes: ");
   scanf("%d", &n);
   printf("enter %d node values:", n);
    for(int i = 0; i < n;i++){
    scanf("%d", &value);
    root = insertNode(root, value);
   }
    printf("\n Preorder traversal of Binary tree \n");
    PreOrder(root);
    printf("\n");
    printf("\n Inorder traversal of Binary tree \n");
    InOrder(root);
    printf("\n");
     printf("\n Postorder traversal of Binary tree \n");
    postOrder(root);
    printf("\n");
    printf("\nenter element to search: ");
    scanf("%d", &key);
    search(root,key);
    return 0;
}
