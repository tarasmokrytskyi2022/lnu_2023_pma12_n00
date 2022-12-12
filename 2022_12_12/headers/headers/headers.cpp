//header.cpp
#include <iostream>
#include "House.h"

int main()
{
    House house;
    house = House();

    cin >> house;
    cout << house;

    House sum;
    sum = house + house;
    cout << sum;
}