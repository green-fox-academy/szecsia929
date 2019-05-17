#include <stdio.h>
#include <stdlib.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

int length(char *string);

char *concatenate(char *string1, char *string2);

int main()
{
    char str1[] = "";
    char str2[] = "";
    char str3[] = "string1string1string1string1string1string1string1string1string1\n";
    char str4[] = "string2string2string2string2string2string2string2string2string2\n";

    printf("%s\n", concatenate(str1, str2));
    printf("%s\n", concatenate(str3, str4));
}

int length(char *string)
{
    int length = 0;
    for (int i = 0; string[i] != 0; i++) {
        length++;
    }
    return length;
}

