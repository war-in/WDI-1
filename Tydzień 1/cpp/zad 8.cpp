// zad 8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int a;
int main()
{
	cin >> a;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a%i == 0)
		{
			cout << "nie";
			return 0;
		}
	}
	cout << "tak";
	return 0;
}