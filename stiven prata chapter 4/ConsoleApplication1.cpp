// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char name1[40], name2[40], grade;
	int age;
	cout << "What is your first name?";
		cin.getline(name1, 40);
	cout << "What is your last name?";
		cin.getline(name2, 40);
	cout << "What letter grade do you deserve?";
		cin >> grade;
		grade++;
	cout << "What is your age?";
		cin >> age;
	cout << "Name: " << name2 << ", " << name1 << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << ".\n";
	system("pause");
	return 0;

}

