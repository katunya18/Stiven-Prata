
#include "pch.h"
#include<iostream>
#include<string>
using namespace std;
struct CandyBar {
	string name;
	double weight;
	int calories;
};
int main() {
	CandyBar Snack;
	Snack.name = "Moncha Munch";
	Snack.weight = 2.3;
	Snack.calories = 350;
	cout << "name: " << Snack.name << " weight= " << Snack.weight << " calories= " << Snack.calories << endl;
	system("pause");
	return 0;
}