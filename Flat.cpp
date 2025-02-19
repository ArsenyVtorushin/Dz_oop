#include "Flat.hpp"

Flat::Flat(std::string address, int area)
{
	this->address = address;
	this->area = area;
}



void Flat::Info()
{
	std::cout << "�����: " << this->address
		<< "\n�������: " << this->area
		<< "\n������:\n";

	for (auto el : people)
	{
		std::cout << ' ';
		el->Info();
		std::cout << std::endl;
	}

	std::cout << "����������� ������������ �������� ����������: " << this->GetCoeff();
}



void Flat::SetAddress(std::string address)
{
	this->address = address;
}


std::string Flat::GetAddress() const
{
	return this->address;
}



void Flat::SetArea(int area)
{
	this->area = area;
}


int Flat::GetArea() const
{
	return this->area;
}



void Flat::Settle(Human* dweller)
{
	this->people.push_back(dweller);
}



float Flat::GetCoeff() const
{
	return this->area / this->people.size();
}

