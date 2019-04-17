#include <iostream>
#include "Station.h"
#include "Car.h"

int main() {
    Station station1(50000);
    Car car1(10, 7);
    Car car2(6, 3);
    Car car3(4, 0);
    Car car4(12, 4);
    Car car5(8, 1);

    station1.fill(car1);
    std::cout<<"--------------\n";
    station1.fill(car2);
    std::cout<<"--------------\n";
    station1.fill(car3);
    std::cout<<"--------------\n";
    station1.fill(car4);
    std::cout<<"--------------\n";
    station1.fill(car5);

    return 0;
}