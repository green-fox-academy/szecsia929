#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits

int main()
{
    int *pointer = (int *) malloc(sizeof(int) * 10);

    for (int i = 0; i < 4; ++i) {
        pointer[i] = rand() % 10 + 1;
    }

    for (int j = 0; j < 10; ++j) {
        printf("%d\n", pointer[j]);
    }

    free(pointer);

    return 0;
}