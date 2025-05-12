#include <iostream>
#include <Windows.h>
using namespace std;

double calculate(double a, double b, char op){
	switch(op){
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите выражение: ";

	double a, b;
	char op;

	cin >> a >> op >> b;
	cout << calculate(a, b, op);
}
