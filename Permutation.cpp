/*
	Permutation.cpp
	Maltseva S.A., 07.01.2023
*/

#include "Permutation.h"
#include <iostream>

void Permutation::Create()
{
	// find element with max possible index
	// that smaller then element with the next index
	int arrj = -1;
	for (int i = N - 1; i > 0; i--) 
	{
		if (p[i - 1] < p[i]) 
		{
			arrj = i - 1;
			break;
		}
	}
	// if element does not exists ->
	// all elements are arranged in DESC order ->
	// there is no next permutation ->
	// setting in array null values
	if (arrj == -1)
		SetNullValues();
	else
	{
		// else find the first index arrh of element that is larger
		// then element with index arrj after this element
		// swap these elements
		// all element after found index arranged in ASC order
		int z, arrn = arrj + 1, arrk = N - 1, arrh = N - 1;
		while (p[arrj] > p[arrh])
			arrh--;
		z = p[arrj];
		p[arrj] = p[arrh];
		p[arrh] = z;
		while (arrn < arrk)
		{
			z = p[arrk];
			p[arrk] = p[arrn];
			p[arrn] = z;
			arrn++;
			arrk--;
		}
		// print result -- new permutation
		Print();
	}
			
}

void Permutation::Print() const
{
	std::cout << "{";
	for (int i = 0; i < N; i++) 
	{
		std::cout << p[i];
		if (i != N - 1)
			std::cout << ",";
	}
	std::cout << "}" << std::endl;
}

void Permutation::Step() 
{
	// if values of array is null then there is no new permutations
	if (p[0] == 0)
		Print();
	// if N == 1 then there is no new permutation too
	else if (N - 1 == 0)
		SetNullValues();
	// else create new permutation
	else
		Create();
}	
