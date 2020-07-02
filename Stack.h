#pragma once
#include <vector>
#include <iostream>



class Stack
{

private:

	std::vector <int> stack;
	int dane[6];
	int rozmiar;
	
	
public:
	   
	void push();
	void pop();
	void size();
	void empty();

	Stack operator+(Stack const& s)const;
	Stack operator-(Stack const& s)const;
};