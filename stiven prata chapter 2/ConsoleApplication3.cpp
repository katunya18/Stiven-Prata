#include "pch.h"
#include <iostream>
using namespace std;
void functionone(void);
void functionsecond(void);

int main()
{
	functionone();
	functionone();
	functionsecond();
	functionsecond();
	return 0;
	system("pause");
}

void functionone() {
	cout << "Three blind mice" << endl;
}

void functionsecond() {
	cout << "See how they run" << endl;
}