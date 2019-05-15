#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
typedef struct {
    char *name;
    float price;
    float weight;
} Sandwich;

float order(Sandwich sandwich, int howMany);

int main()
{
    Sandwich sandwich;
    sandwich.name = "sandwich";
    sandwich.price = 1.5;
    printf("Price: %.1f", order(sandwich, 3));

    return 0;
}

float order(Sandwich sandwich, int howMany)
{
    return sandwich.price * (float) howMany;
}