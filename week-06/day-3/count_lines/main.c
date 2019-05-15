#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int lineCounter(char *fileName);

int main()
{
    printf("%d\n", lineCounter("../my-file.txt"));
    return 0;
}

int lineCounter(char *fileName)
{
    int counter = 0;
    FILE *myFile;

    myFile = fopen(fileName, "r");

    if (myFile == NULL) {
        return 0;
    }

    char line[10];

    while (fgets(line, 10, myFile) != NULL) {
        counter++;
    }

    fclose(myFile);

    return counter;
}