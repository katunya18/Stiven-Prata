// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int Growth1 = 0;
	int Growth2 = 0;
	int Weightf = 0;
	float kgWeight = 0;
	const int feet = 12;
	const double inch = 0.0254;
	const int kg = 2.2;

	cout << "рост в футнах= ";
	cin >> Growth1;
	cout << "рост в дюймах = ";
	cin >> Growth2;
	cout << "вес в фунтах = ";
	cin >> Weightf;
	Growth2 = (Growth1 * feet + Growth2) * inch;
	kgWeight = Weightf / kg;
	cout << "Ваш ИМТ =  " << kgWeight / (Growth2*Growth2)<< endl;
	system("pause");
	return 0;

}