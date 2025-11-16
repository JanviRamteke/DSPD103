// Write a program which creates a structure Student which must have the attribute Avg Marks with 3 more attributes sort the list of the student in descending order using Bubble sort.
#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    float avgMarks;
};
void bubbleSort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].avgMarks < students[j + 1].avgMarks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Average Marks: ");
        scanf("%f", &students[i].avgMarks);
    }
    bubbleSort(students, n);
    printf("\nStudents sorted by Average Marks (Descending):\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Avg Marks: %.2f\n",
               students[i].id, students[i].name, students[i].age, students[i].avgMarks);
    }
   return 0;
}
// OUTPUT
// Enter number of students: 3

// Enter details for student 1:
// ID: 12345
// Name: john
// Age: 16
// Average Marks: 89

// Enter details for student 2:
// ID: 56789
// Name: edith
// Age: 17
// Average Marks: 99

// Enter details for student 3:
// ID: 145634
// Name: Mabel
// Age: 19
// Average Marks: 90

// Students sorted by Average Marks (Descending):
// ID: 56789, Name: edith, Age: 17, Avg Marks: 99.00
// ID: 145634, Name: Mabel, Age: 19, Avg Marks: 90.00
// ID: 12345, Name: john, Age: 16, Avg Marks: 89.00