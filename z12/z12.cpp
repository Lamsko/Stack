// z12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stos.h"


int main()
{
	Stos s1; // pierwszy obiekt Stos
	s1.push(3); //dodajemy elementy
	s1.push(4);
	Stos s3(s1); //kopiujemy Stos s1
	cout << s1.pop() << endl; //zdejmujemy elementy s1
	cout << s1.pop() << endl;

	Stos s2(3); //tworzymy stos mieszczacy max 3 elementy
	s2.push(5);
	s2.push(15);
	s2.push(14);
	s2.push(13); //4 element dla stosu 3 elementowego
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl; //zdejmujemy elementy s2
	s2.pop(); // s2 jest juz pusty
	s1.toString(); //wydruk s1 ktory jest juz pusty
	s3.toString(); // wydruk s3 ktory jest skopiowanym s1, z s3 nie sciagalismy elementow
	Stos s4 = move(s3); //konstruktor przenoszacy
	s4.toString(); // wydruk s4
	return 0;
}

