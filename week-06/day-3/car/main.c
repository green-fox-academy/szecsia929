#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};

struct car {
    enum car_type type;
    double km;
    double gas;
};

void printStat(struct car _car);

int main()
{
    struct car car1;
    struct car car2;
    car1.type = VOLVO;
    car1.km = 105.50;
    car1.gas = 26.82;
    car2.type = TESLA;
    car2.km = 500.15;
    printStat(car1);
    printStat(car2);

    return 0;
}

void printStat(struct car _car)
{
    switch (_car.type) {
        case VOLVO:
            printf("Type: Volvo\n");
            break;
        case TOYOTA:
            printf("Type: Toyota\n");
            break;
        case LAND_ROVER:
            printf("Type: Land Rover\n");
            break;
        case TESLA:
            printf("Type: Tesla\nkm: %.2lf\n", _car.km);
            return;
    }
    printf("km: %.2lf\nGas: %.2lf\n", _car.km, _car.gas);
}