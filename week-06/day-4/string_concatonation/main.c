#include <stdio.h>
#include <stdlib.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

int length(char *string);

char *concatenate(char *string1, char *string2);

int main()
{
    char *string = (char *) malloc(sizeof(char));
    string = "hello bazdmeg";
    printf("%s\n", string);
    free(string);
    string = NULL;
    printf("%s\n", string);

}

int length(char *string)
{
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        length++;
    }
    return length;
}

char *concatenate(char *string1, char *string2)
{
}