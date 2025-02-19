#ifndef FLAT_HPP
#define FLAT_HPP

#include <iostream>
#include <list>
#include <string>
#include "Human.hpp"

class Flat
{
public:
	Flat() = default;
	Flat(std::string address, int area);

	void Info();

	void SetAddress(std::string address);
	std::string GetAddress()const;

	void SetArea(int area);
	int GetArea()const;

	void Settle(Human* dweller);

	float GetCoeff()const;

private:
	std::string address;
	int area;
	std::list<Human*> people;
};

#endif // !FLAT_HPP
