#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int Farlong;
	int distance;
	Farlong = 220;
	cout << "Введите расстояние в фарлонгах:";
	cout << endl;
	cin >> distance;

	cout << distance << " Фарлонг = " << Farlong * distance << " ярд";
	system("pause");
	return 0;


}