 #include "pch.h"
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int gasoline;
	int distance;

	cout << "Введите расстояние в километрах ___";
	cin >> distance;
	cout << endl;
	cout << "Введите количество израсходованного бензина в литрах ___ ";
	cin >> gasoline;
	
	
	cout << " Машина проехала = " << distance/ gasoline << " километров на 1 литр топлива";

	system("pause");
	return 0;
}