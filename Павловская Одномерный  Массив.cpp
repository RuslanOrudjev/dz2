#include "pch.h"
#include <iostream>

using namespace std;

int arr[64];

int min_el()
{
	int min = arr[0];
	for (int i = 1; i < 64; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int sum()
{
	int sum = 0;
	for (int i = 1; i < 63; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void sort()
{
	int buffer;
	for (int i = 0; i < 64; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			buffer = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = buffer;
		}
	}
}

int main()
{
	for (int i = 0; i < 64; i++)
	{
		arr[i] = i;
	}
	cout << "Summa:" << sum() << endl;
	cout << "Minimum:" << min_el() << endl;
	sort();
	return 0;
}