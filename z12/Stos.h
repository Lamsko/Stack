#pragma 
#include <iostream>

#define SIZE 100

using namespace std;

class Stos
{
public:
	Stos();
	Stos(int l);
	Stos(const Stos &s);
	Stos(Stos&& s);
	~Stos();
	void push(int x);
	int pop();
	void toString();
private:
	int *tablica;
	int size;
	int top;
};

