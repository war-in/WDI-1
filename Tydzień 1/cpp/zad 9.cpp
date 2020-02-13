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
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
		{
			cout << i <<endl;
		}
	}
	return 0;
}