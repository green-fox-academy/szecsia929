#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Modify this program to greet you instead of the World!
    printf("Hello, Alex!\n");

    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87
    char name[] = "Alex Szecsi";
    int age = 24;
    float height = 1.8;
    printf("%s\n%d\n%.1f\n", name, age, height);

    printf("\n*******************************************\n");

    // Create a program that prints a few operations on two numbers: 22 and 13
    // Print the result of 13 added to 22
    int added = 13 + 22;
    printf("%d\n", added);
    // Print the result of 13 subtracted from 22
    int subtracted = 22 - 13;
    printf("%d\n", subtracted);
    // Print the result of 22 multiplied by 13
    int multiplied = 13 * 22;
    printf("%d\n", multiplied);
    // Print the result of 22 divided by 13 (as a decimal fraction)
    float divided = (float) 22 / (float) 13;
    printf("%f\n", divided);
    // Print the reminder of 22 divided by 13
    int reminder = 22 % 13;
    printf("%d\n", reminder);
    // Store the results in variables and use them when you display the result

    printf("\n*******************************************\n");

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000
    double side1, side2, side3, surfaceArea, volume;
    printf("side1: ");
    scanf("%lf", &side1);
    printf("side2: ");
    scanf("%lf", &side2);
    printf("side3: ");
    scanf("%lf", &side3);
    surfaceArea = 2 * (side1 * side2 + side1 * side3 + side2 * side3);
    volume = side1 * side2 * side3;
    printf("Surface Area: %.0lf\nVolume: %.0lf", surfaceArea, volume);

    printf("\n*******************************************\n");

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    srand(time(NULL));
    int number = rand() % 20 + 1;
    int guess = 21;
    while (number != guess) {
        printf("Enter your guess! ");
        scanf("%d", &guess);
        if (guess == number) {
            printf("You found the number: %d", number);
        } else if (guess > number) {
            printf("The stried number is lower\n");
        } else {
            printf("The stored number is higher\n");
        }
    }
    return 0;
}