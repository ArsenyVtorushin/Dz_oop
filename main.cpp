#include "Flat.hpp"
#include "Human.hpp"
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Flat flat1("�������-�����, 10", 30);
	Human human1("�������-��������", "�������", "�������");
	Human human2("�������-��������", "����������", "������");

	flat1.Settle(&human1);
	flat1.Settle(&human2);

	flat1.Info();

	std::cout << "\n\n\n";


	return 0;
}

