#include <stdio.h>
#include <stdlib.h>
#include "separate.h"

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that circle
// area = radius * radius * PI

int main()
{
    float radius;
    printf("Give me the radius! ");
    scanf("%f", &radius);
    printf("The area is: %.2f\n", area(radius));
    printf("The circumference is: %.2f\n", circumference(radius));
    return 0;
}