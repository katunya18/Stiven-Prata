// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include <iostream>
using namespace std;
double growth;
const double coefficient = 0.083333;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "рост=";
	cin >> growth;
	cout << "Рост в футах = " << growth * coefficient << "; в дюймах = " << growth << endl;
	system("pause");
	return 0;
}