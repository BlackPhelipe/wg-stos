
#include "Stack.h"
#include <cmath>
#include <string>
#include <windows.h>



void Stack::push()
{
	if (rozmiar >= 5)
	{
		std::cout << "Stos pelny!";
		Sleep(1000);
	}
	else
	{
		std::cout << std::endl << "PUSH (jaka liczbe polozyc na stosie): ";

		rozmiar = rozmiar + 1;
		std::cin >> dane[rozmiar];
	}
}

void Stack::pop()
	{
		if (rozmiar >= 1)
		{
			std::cout << std::endl << "POP - nastapi usuniecie ze stosu liczby: " << dane[rozmiar];
			Sleep(2000);

			rozmiar = rozmiar - 1;
		}
		else
		{
			std::cout << "Stos pusty!";
			Sleep(1000);
		}
	}

void Stack::size()
	{
		std::cout << std::endl << "Liczba elementow na stosie: " << rozmiar;
		Sleep(2000);
	}

void Stack::empty()
	{
		if (rozmiar == 0) std::cout << std::endl << "EMPTY (stos pusty?) ->  TRUE";
		else std::cout << std::endl << "EMPTY (stos pusty?) ->  FALSE";
		Sleep(2000);
	}


Stack Stack::operator+(Stack const& s) const
{
	return Stack();
}

Stack Stack::operator-(Stack const& s) const
{
	return Stack();
}
