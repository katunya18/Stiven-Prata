#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	struct CandyBar {
		char maker[35];
		float weight;
		int calories;
	};
	int i;
	CandyBar sweet[3];

	sweet[0] = { "M&M's     ", 0.36,   511};
	sweet[1] = { "Fruittella", 0.041,  142 };
	sweet[2] = { "Toffifee",   0.1623, 516 };
	for (i = 0; i <= 2; i++) {
		cout << "Maker    Weight   Calories" << endl;
		cout << sweet[i].maker << ", " << sweet[i].weight << ", " << sweet[i].calories << endl;

	}

}