#include <iostream>



class Human
{
public:
	Human(std::string surname, std::string name, std::string patronymic)
	{
		this->surname = surname;
		this->name = name;
		this->patronymic = patronymic;
	}

private:
	std::string surname;
	std::string name;
	std::string patronymic;
};



int main()
{

}