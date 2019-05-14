#include <stdio.h>
#include <string.h>

int length1(char array[]);

int length2(char array[]);

int count_between_chars(char *word);

int main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions
    char name[30];
    printf("Give me your name:");
    gets(name);
    printf("Your name contains %d characters.\n", length1(name));
    printf("Your name contains %d characters.\n", length2(name));

    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char *word = "Programming";

    // the output should be: 6 (in this case the repeating char was 'g')
    printf("%d", count_between_chars(word));

    return 0;
}

int length1(char array[])
{
    int length = 0;
    char *word = strtok(array, " ");
    while (word != NULL) {
        length += strlen(word);
        word = strtok(NULL, " ");
    }
    return length;
}

int length2(char array[])
{
    int length = 0;
    for (int i = 0; array[i] != '\0'; ++i) {
        length++;
    }
    return length;
}

int count_between_chars(char *word)
{
    char what;
    printf("What?");
    scanf("%c", &what);
    int flag = 0, counter = 0;
    while (*word != '\0') {
        if (*word == what) {
            flag = 1;
        }
        if (flag && *word != what) {
            counter++;
        }
        word++;
    }
    return counter;
}