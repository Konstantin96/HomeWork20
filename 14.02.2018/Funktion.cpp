#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int i, j;

enum type_number { positive, negative, all };

void sort_u(int*arr, int j)
{
	int prom;
	if (arr[j] > arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort_d(int*arr, int j)
{
	int prom;
	if (arr[j] < arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort(int*arr, int r, int n)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r - 1; j++)
		{
			if (n == 1)
				sort_u(arr, j);
			else
				sort_d(arr, j);
		}
	}
}

int numb(type_number tn, int start, int end)
{
	switch (tn)
	{
	case positive:
		return start + rand() % end;
		break;
	case negative:
		return start*(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;
	}
}
double numb(type_number tn, double start, int end)
{
	switch (tn)
	{
	case positive:
		return (start + rand() % end) / (start + rand() % end);
		break;
	case negative:
		return (start*(-1) + rand() % end) / (start*(-1) + rand() % end);
		break;
	case all:
		return rand();
		break;
	}
}

void creat(int*arr, int r, int start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		arr[i] = numb(tn, start, end);
	}
}

void print_arr(int*arr, int r)
{
	for (i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void newArr(int*arr, int r, int*arr1, int r1, int*arr2, int r2)
{
	int n = 0, m = 0;
	for (int i = 0; i < r2; i++)
	{
		if (arr[n] <= arr1[m] && n != r)
		{
			arr2[i] = arr[n];
			if (n<r)
				n++;
		}
		else if (n == r)
		{
			arr2[i] = arr1[m];
			if (m<r1)
				m++;
		}
		else if (arr1[m] < arr[n] && m != r1)
		{
			arr2[i] = arr1[m];
			if (m<r1)
				m++;
		}
		else if (m == r1)
		{
			arr2[i] = arr[n];
			if (n<r)
				n++;
		}
	}
}

int common(int*arr, int r, int*arr1, int r1, int*arr2)
{
	int b = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr[i] == arr1[j])
			{
				arr2[b] = arr[i];
				b++;
			}
		}
	}
	if (b == 0) cout << "Â ìàññèâàõ íåò îáùèõ ýëåìåíòîâ\n";
	return b;
}

int dissimilar(int*arr, int r, int*arr1, int r1, int*arr2)
{
	int b = 0, d = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr[i] == arr1[j])
			{
				d++;
			}
		}
		if (d == 0)
		{
			arr2[b] = arr[i];
			b++;
		}
		d = 0;
	}
	return b;
}

int dis(int*arr, int r, int*arr1, int r1, int*arr2)
{
	int b = 0, d = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr[i] == arr1[j])
			{
				d++;
			}
		}
		if (d == 0)
		{
			arr2[b] = arr[i];
			b++;
		}
		d = 0;
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr1[i] == arr[j])
			{
				d++;
			}
		}
		if (d == 0)
		{
			arr2[b] = arr1[i];
			b++;
		}
		d = 0;
	}
	return b;
}