#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

typedef struct house {
    char *address;
    float price;
    int numberOfRooms;
    float area;
} House;

int worthToBuy(House *house);

int countHousesWorthToBuy(House houses[], int length);

int main()
{
    House houses[10];
    for (int i = 0; i < 10; ++i) {
        houses[i].area = 150;
        houses[i].price = houses[i].area * 410;
    }
    houses[0].price = houses[0].area * 390;
    houses[3].price = houses[3].area * 310;
    houses[4].price = houses[4].area * 310;

    printf("%d houses are worth buying.\n", countHousesWorthToBuy(houses, 10));

    return 0;
}

int worthToBuy(House *house)
{
    return (house->price < 400 * house->area) ? 1 : 0;
}

int countHousesWorthToBuy(House houses[], int length)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (worthToBuy(&houses[i])) {
            counter++;
        }
    }
    return counter;
}