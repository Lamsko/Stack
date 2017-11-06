#include "stdafx.h"
#include "Stos.h"


Stos::Stos()
{
	top = -1;
	size = SIZE;
	tablica = new int[SIZE];
}

Stos::Stos(int l)
{
	top = -1;
	size = l;
	tablica = new int[l];
}

Stos::Stos(const Stos & s)
{
	cout << "Konstruktor kopiujacy" << endl;
	top = s.top;
	size = s.size;
	tablica = s.tablica;

}

Stos::Stos(Stos && s)
{
	cout << "Konstruktor przenoszacy" << endl;
	top = s.top;
	size = s.size;
	tablica = s.tablica;
}


Stos::~Stos()
{
	
}

void Stos::push(int x)
{
	if (top == (size - 1))
	{
		cout << "Nie mozna dodac elementu. Przepelnienie stosu." << endl;
		return;
	}
	tablica[++top] = x;
}

int Stos::pop()
{
	if (top < 0)
	{
		cout << "Nie mozna pobrac elementu. Stos jest juz pusty." << endl;
		return -1;
	}
	return tablica[top--];

}

void Stos::toString()
{
	cout << "Stos: ";
	for (int i = 0; i <= top; i++)
		cout << tablica[i] << " ";
	cout << endl;
}
