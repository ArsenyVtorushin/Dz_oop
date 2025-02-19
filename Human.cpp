#include "Human.hpp"

Human::Human(std::string surname, std::string name, std::string patronymic)
{
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
}


Human::Human(Human& other)
{
	this->surname = other.surname;
	this->name = other.name;
	this->patronymic = other.patronymic;
}



void Human::Info()
{
	std::cout << this->surname << ' ' << this->name << ' ' << this->patronymic;
}



void Human::SetSurname(std::string surname)
{
	this->surname = surname;
}


void Human::SetName(std::string name)
{
	this->name = name;
}


void Human::SetPatronymic(std::string patronymic)
{
	this->patronymic = patronymic;
}



std::string Human::GetSurname()
{
	return this->surname;
}


std::string Human::GetName()
{
	return this->surname;
}


std::string Human::GetPatronymic()
{
	return this->patronymic;
}

