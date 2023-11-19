#pragma once
#include <iostream>
#include <string>

class ComputerPart
{
public:
	ComputerPart();
	~ComputerPart();
	ComputerPart(std::string name, double price);
	ComputerPart(ComputerPart& m);
	std::string getName();
	double getPrice();
	void setPrice(double price);
	void setName(std::string name);

protected:
	std::string name;
	double price;

};