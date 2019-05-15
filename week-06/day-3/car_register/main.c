#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

typedef enum {
    MANUAL, AUTOMATIC, CVT, SEMI_AUTOMATIC, DUAL_CLUTCH
} transmission;

typedef struct car {
    char nameOfManufacturer[256];
    float price;
    int yearOfManufacture;
    transmission trType;
} Car;

int get_older_cars_than(Car *cars, int length, int age);

int get_transmission_count(Car *car, int length, transmission tr_type);

int main()
{
    srand(time(NULL));
    Car cars[10];

    for (int i = 0; i < 10; ++i) {
        cars[i].yearOfManufacture = rand() % 2019 + 1819;
        cars[i].trType = rand() % 4;
    }

    cars[0].yearOfManufacture = 1790;
    cars[5].yearOfManufacture = 1791;
    cars[6].yearOfManufacture = 1791;
    cars[0].trType = 4;
    cars[1].trType = 4;

    printf("Old: %d\nDual-clutch: %d\n", get_older_cars_than(&cars[0], 10, 201),
           get_transmission_count(&cars[0], 10, DUAL_CLUTCH));

    return 0;
}

int get_older_cars_than(Car *cars, int length, int age)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (2019 - cars[i].yearOfManufacture > age) {
            counter++;
        }
    }
    return counter;
}

int get_transmission_count(Car *car, int length, transmission tr_type)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (car[i].trType == tr_type) {
            counter++;
        }
    }
    return counter;
}