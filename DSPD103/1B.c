// Write a program to implement a Binary Search algorithm. Write a search function which takes a SearchList as its first parameter and a Comparable as its second. If either parameter is null, or if the SearchList is empty, you should return NULL.
//  implement the following algorithm: 
// • Examine the value in the middle of the current array and print it. 
// • If the midpoint value is the value that we are looking for, return true 
// • If the value that we are looking for is greater than the midpoint value, adjust the current array to start at the midpoint and print the index.
// • if the value that we are looking for is less than the midpoint value, adjust the current array to end at the midpoint  and print the index.
// • Continue until you find the value, or until the start reaches the end, 

#include <stdio.h>
#include <stdbool.h>
bool binarySearch(int arr[], int size, int target) {
    if (arr == NULL || size == 0) {
        return false;
    }
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        int midValue = arr[mid];
        printf("Examining value: %d\n", midValue);
        if (midValue == target) {
            printf("Found at index: %d\n", mid);
            return true;
        }
        if (target > midValue) {
            start = mid + 1;
            printf("Target is greater, new start index: %d\n", start);
        } else {
            end = mid - 1;
            printf("Target is smaller, new end index: %d\n", end);
        }
    }
    return false;
}
int main() {
    int size, target;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Array is empty.\n");
        return 0;
    }
    int arr[size];
    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to search: ");
    scanf("%d", &target);
    bool result = binarySearch(arr, size, target);
    if (result) {
        printf("value found\n");
    } else {
        printf("value not found\n");
    }
    return 0;
}
// OUTPUT
// Enter number of elements: 5
// Enter 5 sorted elements:
// 33 44 55 66 77
// Enter value to search: 55
// Examining value: 55
// Found at index: 2
// value found