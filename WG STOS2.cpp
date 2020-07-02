#include <iostream>
#include <windows.h>
#include "Stack.h"
#include <stack>


int dane[6];
int rozmiar;


void menu()
{
	system("CLS");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "ZAWARTOSC STOSU:" << std::endl;
	std::cout << "----------------" << std::endl;

	for (int i = Stack::rozmiar; i >= 1; i--)
	{
		std::cout << dane[i] << std::endl;
	}

	if (rozmiar == 0)
	{
		std::cout << "pusty" << std::endl;
		std::cout << "----------------" << std::endl << std::endl;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

int main()
{

	int wybor;
	rozmiar = 0;

	do
	{
		menu();

		std::cout << "MENU GLOWNE STOSU:" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "1. PUSH (dodaje element na szczyt stosu) " << std::endl;
		std::cout << "2. POP (usuwa element ze szczytu stosu) " << std::endl;
		std::cout << "3. SIZE (ile elementow na stosie) " << std::endl;
		std::cout << "4. EMPTY (czy stos jest pusty?) " << std::endl;
		std::cout << "5. Koniec programu " << std::endl;
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "Wybor: ";
		std::cin >> wybor;


		Stack st;

		switch (wybor)
		{
		case 1:
			st.push();
			break;

		case 2:
			st.pop();
			break;

		case 3:
			st.size();
			break;

		case 4:
			st.empty();
			break;

		}

	} while (wybor != 5);

	return 0;
}