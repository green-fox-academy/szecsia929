#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int *even = (int *) malloc(sizeof(int) * 10);
    int *odd = (int *) malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; ++i) {
        even[i] = (rand() % 10 + 1) * 2;
        odd[i] = ((rand() % 10 + 1) * 2) + 1;
    }

    odd = (int *) realloc(odd, sizeof(int) * 20);

    for (int j = 10; j < 20; ++j) {
        odd[j] = even[j - 10];
    }

    free(even);
    even = NULL;
    int buff;

    for (int i = 20; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (odd[j] < odd[i]) {
                buff = odd[j];
                odd[j] = odd[i];
                odd[i] = buff;
            }
        }
    }

    for (int k = 0; k < 20; ++k) {
        printf("%d\n", odd[k]);
    }

    free(odd);
    odd = NULL;

    return 0;
}