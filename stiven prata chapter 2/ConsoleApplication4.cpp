#include "pch.h"
#include <iostream>
using namespace std;
void function1(void);
int main()
{
	function1();
	system("pause");
	return 0;
}

void function1()
{
	setlocale(LC_ALL, "Russian");
	int Celsius;
	cout << "Введите температуру в градусах Цельсия:";
	cout << endl;
	cin >> Celsius;
	cout << Celsius << " градусов Цельсия = " << 1.8 * Celsius + 32.0 << " градусов Фаренгейта";
}