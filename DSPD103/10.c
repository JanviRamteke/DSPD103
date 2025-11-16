// Write a C program (name it "filecopy. c")  that copies the contents of one file to a destination file. This program will read data from one file and copy them to another. The first input that the program will need is the names of the two files: input file ("input.txt") and output file ("output.txt"). Once the two file names have been obtained, the program must open the input file and create and open the output file.
#include <stdio.h>
#include <stdlib.h>
int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    char ch;
    printf("Enter source file name: ");
    scanf("%s", srcFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file %s\n", srcFile);
        exit(1);
    }
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file %s\n", destFile);
        fclose(src);
        exit(1);
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully from %s to %s\n", srcFile, destFile);
    fclose(src);
    fclose(dest);

    return 0;
}
