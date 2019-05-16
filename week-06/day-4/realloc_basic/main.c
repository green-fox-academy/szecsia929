#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int x, sum = 0;

    printf("Give me a number!");
    scanf("%d", &x);

    int *numbersX = (int *) malloc(sizeof(int) * x);

    for (int i = 0; i < x; ++i) {
        printf("%d.number:", i + 1);
        scanf("%d", &numbersX[i]);
        sum += numbersX[i];
    }

    free(numbersX);
    numbersX = NULL;

    int *numbersY = (int *) malloc(sizeof(int) * sum);

    for (int j = 0; j < sum; ++j) {
        numbersY[j] = rand() % 100 + 1;
        printf("%d.number = %d\n", j + 1, numbersY[j]);
    }

    free(numbersY);
    numbersY = NULL;

    return 0;
}