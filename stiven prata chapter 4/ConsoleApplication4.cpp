// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	struct pizzainfo {
		char maker[50];
		double diametr;
		double weight;
	};
	pizzainfo pizza;
	cout << "Введите название пиццы \n";
		cin.getline(pizza.maker, 50);
	cout << "Введите ее диаметр \n";
		cin >> pizza.diametr;
	cout << "Введите ее массу \n";
		cin >> pizza.weight;
		cout << "Название пиццы    Диаметр пиццы     Вес пиццы" << endl;
	cout << pizza.maker << "                 " << pizza.diametr << "                    " << pizza.weight;

}