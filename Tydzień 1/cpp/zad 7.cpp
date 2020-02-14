// zad 7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

using namespace std;
int fib = 1, fib_prew = 0, liczba, iloczyn;
int main()
{
	cin >> liczba;
	while (fib*fib_prew <= liczba)
	{
		iloczyn = fib * fib_prew;
		if (iloczyn == liczba)
		{
			cout << "tak";
			return 0;
		}
		fib += fib_prew;
		fib_prew = fib - fib_prew;
	}
	cout << "nie";
	return 0;
}

