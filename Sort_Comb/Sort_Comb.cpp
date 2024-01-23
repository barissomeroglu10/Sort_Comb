/*
In this code, we use Comb Sort to put array in an order.

Developer: Barış Someroğlu
Date: 23.01.2024 / 6:00 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp, gap, change;

	// get size of array
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << endl;

	// get value for array
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter A[" << i << "]: ";
		cin >> A[i];
	}

	cout << endl;

	// write entered array
	cout << "Entered Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}


	change = 1;
	gap = n;


	// use comb sort
	while (gap != 1 || change == 1)
	{
		gap = gap / 1.3;

		if (gap < 1)
		{
			gap = 1;
		}

		change = 0;

		for (int i = 0; i < n-gap; i += gap)
		{
			if (A[i] > A[i + gap])
			{
				temp = A[i];
				A[i] = A[i + gap];
				A[i + gap] = temp;
				// swap(A[i],A[i+gap]);

				change = 1;
			}
		}
	}

	cout << endl;

	// write sorted array
	cout << "Sorted Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;


	return 0;
}