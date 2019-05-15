#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main()
{
    FILE *myFile;
    myFile = fopen("../my-file.txt", "w");
    fputs("Alex Szecsi", myFile);
    return 0;
}