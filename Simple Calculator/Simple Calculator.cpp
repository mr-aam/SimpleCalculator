﻿// Simple Calculator C++ Console  With Visual Studio 2017
//Developed by https://Mr-aam.ir

//Free Code and Available On https://github.com/mr-aam/SimpleCalculator/

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long double n1, n2;
	char z;



	do {
		cout << "						Simple Calculator" << '\n';
		cout << "Enter Frist Number:" << '\n';
		cin >> n1;
		cout << "Enter the operator(+,-,*,^,/,%) to calculate:" << '\n';
		cin >> z;
		cout << "Enter Second Number:" << '\n';
		cin >> n2;
		switch (z)
		{

		case '+':
			cout << n1 << "+" << n2 << "= " << n1 + n2 << '\n';
			break;
		case '-':
			cout << n1 << "-" << n2 << "= " << n1 - n2 << '\n';
			break;
		case '*':
			cout << n1 << "*" << n2 << "= " << n1 * n2 << '\n';
			break;
		case '^':
			cout << n1 << "^" << n2 << "= " << pow(n1, n2) << '\n';
			break;
		case '/':
			cout << n1 << "/" << n2 << "= " << n1 / n2 << '\n';
			break;
		case '%':
			cout << n1 << "%" << n2 << "= " << fmod(n1, n2) << '\n';
			break;

		default:
			cout << "The entered operator is incorrect! " << '\n';
			break;
		}

		cout << "If you want to recalculate, Enter r " << '\n';
		cin >> z;
		system("CLS");	//For Clear Screen
	} while (z == 'r');

	_getch();
	return 0;
}

