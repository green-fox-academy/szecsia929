#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{
    FILE *myFile;
    myFile = fopen("../my-file.txt", "r");
    char line[100];
    while (fgets(line, 100, myFile) != 0) {
        printf("%s", line);
    }
    fclose(myFile);
    return 0;
}