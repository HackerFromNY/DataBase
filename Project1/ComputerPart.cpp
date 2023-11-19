#include <iostream>
#include <string>
#include "ComputerPart.h"

ComputerPart::ComputerPart()
{
	name = "Писька";
	price = 0;
}

ComputerPart::~ComputerPart()
{

}

ComputerPart::ComputerPart(std::string name, double price)
{
	this->name = name;
	this->price = price;
}

ComputerPart::ComputerPart(ComputerPart& m)
{
	name = m.name;
	price = m.price;
}

std::string ComputerPart::getName()
{
	return name;
}

double ComputerPart::getPrice()
{
	return price;
}

void ComputerPart::setPrice(double price)
{
	this->price = price;
}

void ComputerPart::setName(std::string name)
{
	this->name = name;
}




