// Assume that you have a seven-slot closed hash table (the slots are numbered o through 6) Write program  to final hash table that would result if you used the hash function h(k) - k mod 7.
#include<stdio.h>
#include<stdlib.h>
#define  SIZE 7
int hash(int key){
    return key%SIZE;
}
int main(){
    int table[SIZE];
    int n, key;
    for(int i =0;i < SIZE;i++){
        table[i] = -1;
    }printf("enter number of keys to insert: ");
    scanf("%d", &n);
    printf("Enter %d keys: \n", n);
    for(int i =0; i<n;i++){
        scanf("%d", &key);
        int index = hash(key);
        while(table[index] != -1){
            index = (index + 1) % SIZE;
        }
        table[index] =key; 
    }    
        printf("\n Final HAsh Table: \n");
        for(int i =0;i<SIZE;i++){
            if(table[i] != -1)
                printf("Slot %d: %d\n", i, table[i]);
            else
                printf("Slot %d: EMPTY\n", i);
        }
        return 0;
    
}
// OUTPUT
// enter number of keys to insert: 5
// Enter 5 keys: 
// 10
// 3
// 17
// 24
// 5

//  Final HAsh Table:
// Slot 0: 5
// Slot 1: EMPTY
// Slot 2: EMPTY
// Slot 3: 10
// Slot 4: 3
// Slot 5: 17
// Slot 6: 24