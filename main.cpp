/*
	main.cpp
	Maltseva S.A., 07.01.2023
*/

#include "Permutation.h"
#include <iostream>


using namespace std;

// recursive function
int factorial(int x)
{
	if (x <= 1)
		return 1;
	else
		return x * factorial(x - 1);
}

int main()
{
	try
	{
		// enter N
		int n, m;
		cout << "Size of array: ";
		cin >> n;
		if (n == 0)
			throw 0;
		// create new object
		Permutation P(n);
		cout << endl;
		// number of permutation
		// with null array output
		m = factorial(n);
		for (int i = 0; i < m; i++)
		{
			P.Step();
		}
		return 0;
	}
	catch (int e)
	{
		cout << "Size of array cannot be 0" << endl;
	}
}
/*
int main()
{
	try
	{
		// enter N
		int n;
		cout << "Size of array: ";
		cin >> n;
		if (n == 0)
			throw 0;
		// create new object
		Permutation P(n);
		cout << endl;
		// start of creating permutations
		cout << "Press 1 to create next permutation or 0 to exit" << endl;
		char ex;
		cin >> ex;
		while (ex == '1')
		{
			// while user enters 1 permutations are output
			// if permutations are none then output array with null values
			if (ex == '0')
				break;
			P.Step();
			cout << "Press 1 to create next permutation or 0 to exit" << endl;
			cin >> ex;
		}
		return 0;
	}
	catch (int e)
	{
		cout << "Size of array cannot be 0" << endl;	
	}
}*/
