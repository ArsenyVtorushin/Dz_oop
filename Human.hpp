#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>

class Human
{
public:
	Human() = default;
	Human(std::string surname, std::string name, std::string patronymic);

	Human(Human& other);

	void Info();

	void SetSurname(std::string surname);
	void SetName(std::string name);
	void SetPatronymic(std::string patronymic);

	std::string GetSurname();
	std::string GetName();
	std::string GetPatronymic();

private:
	std::string surname;
	std::string name;
	std::string patronymic;
};

#endif // !HUMAN_HPP
