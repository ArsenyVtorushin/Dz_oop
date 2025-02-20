#include "Flat.hpp"
#include "Human.hpp"
#include "Fraction.hpp"
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Flat flat1("Даунинг-стрит, 10", 30);
	Human human1("Спенсер-Черчилль", "Уинстон", "Леонард");
	Human human2("Спенсер-Черчилль", "Клементина", "Огилви");

	flat1.Settle(&human1);
	flat1.Settle(&human2);

	flat1.Info();


	std::cout << "\n\n\n";


	Fraction fr1(5, 7);
	std::cout << fr1 << '\n';

	Fraction fr2(3, 9);
	std::cout << fr2 << "\n\n";


	std::cout << "+ : " << fr1 + fr2 << "\n\n";
	std::cout << "- : " << fr1 - fr2 << "\n\n";
	std::cout << "* : " << fr1 * fr2 << "\n\n";
	std::cout << "/ : " << fr1 / fr2 << "\n\n";

	return 0;
}



