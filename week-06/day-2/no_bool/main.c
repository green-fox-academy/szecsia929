#include <stdio.h>
#include <stdlib.h>

int oldEnough(int age);

int equals(int number1, int number2);

int prime(int number);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary
    int age;
    printf("Age?");
    scanf("%d", &age);
    oldEnough(age) ? printf("Old enough.\n") : printf("Not old enough.\n");

    // Create a program which asks for two integers and stores them separately
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise
    int number1, number2;
    printf("Give me two numbers!");
    scanf("%d%d", &number1, &number2);
    equals(number1, number2) ? printf("Equals\n") : printf("Not equals\n");

    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)
    int number3;
    printf("Give me a number!");
    scanf("%d", &number3);
    prime(number3) ? printf("Prime\n") : printf("Not prime\n");

    return 0;
}

int oldEnough(int age)
{
    return (age >= 18) ? 1 : 0;
}

int equals(int number1, int number2)
{
    return (number1 == number2) ? 1 : 0;
}

int prime(int number)
{
    if (number == 1 || number == 0) {
        return 0;
    }

    for (int i = 1; i <= number; ++i) {
        if (i != 1 && i != number && number % i == 0) {
            return 0;
        }
    }
    return 1;
}