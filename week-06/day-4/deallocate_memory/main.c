#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int *pointer = (int *) malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; ++i) {
        pointer[i] = (rand() % 50 + 1) * 2;
        printf("%d\n", pointer[i]);
    }

    pointer = (int *) realloc(pointer, 0);
    pointer = NULL;

    return 0;
}