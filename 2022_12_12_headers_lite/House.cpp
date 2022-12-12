//House.cpp
#include "House.h"
#include <iostream>

House::House()
{
	number = 10;
	color = "Green";
}

House::House(int number, string color)
{
	this->number = number;
	this->color = color;
}

void House::Input()
{
	cout << "Enter house info:\n";

	cin >> number;
	cin >> color;
}

void House::Output()
{
	cout << "House info:" << endl;
	cout << "number:" << number << endl;
	cout << "color:" << color << endl;
}

int House::getNumber()
{
	return number;
}

string House::getColor()
{
	return color;
}

void House::setNumber(int number)
{
	this->number = number;
}

void House::setColor(string color)
{
	this->color = color;
}

istream& operator>>(istream& is, House& house)
{
	cout << "Input info about House:" << endl;
	cout << "Number: " << endl;
	int number;
	is >> number;
	house.setNumber(number);

	string color;
	is >> color;
	house.setColor(color);
	return is;
}

ostream& operator<<(ostream& os, House& house)
{
	os << "Input info about House:" << endl;
	os << "Number: ";
	os << house.getNumber() << endl;

	os << "Color: ";
	os << house.getColor() << endl;
	return os;
}

House operator+(House& house1, House& house2)
{
	House result;
	result.setNumber(house1.getNumber() + house2.getNumber());
	result.setColor(house1.getColor() + house2.getColor());
	return result;
}