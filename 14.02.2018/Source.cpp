#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Prototip.h"

using namespace std;
int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода ";
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*Даны два массива, упорядоченных по возрастанию : А[n] и B[m].Сформируйте
			массив C[n + m], состоящий из элементов массивов А и В, упорядоченный
			по возрастанию(Массив С не должен сортироваться).*/
			system("cls");
			int A[5], B[5], C[10];
			creat(A, 5, 1, 50, positive);
			sort(A, 5, 1);
			cout << "Массив A\n";
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			sort(B, 5, 1);
			cout << "Массив B\n";
			print_arr(B, 5);
			newArr(A, 5, B, 5, C, 10);
			cout << "Массив C\n";
			print_arr(C, 10);
		}
		else if (nz == 2)
		{
			/*Даны два массива : А[n] и B[m].Необходимо создать третий массив,
			в котором нужно собрать общие элементы двух массивов.*/
			system("cls");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			cout << "Массив A\n";
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			cout << "Массив B\n";
			print_arr(B, 8);
			r = common(A, 8, B, 8, C);
			if (r > 0)
			{
				cout << "Массив с общими элементами\n";
				print_arr(C, r);
			}
		}
		else if (nz == 3)
		{
			/*Даны два массива : А[n] и B[m].Необходимо создать третий массив,
			в котором нужно собрать элементы массива A, которые не включаются в B.*/
			system("cls");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			cout << "Массив A\n";
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			cout << "Массив B\n";
			print_arr(B, 8);
			r = dissimilar(A, 8, B, 8, C);
			cout << "Уникальные элементы массива A\n";
			print_arr(C, r);
		}
		else if (nz == 4)
		{
			/*Даны два массива : А[n] и B[m].Необходимо создать третий массив,
			в котором нужно собрать элементы массива B, которые не включаются в A.*/
			system("cls");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			cout << "Массив A\n";
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			cout << "Массив B\n";
			print_arr(B, 8);
			r = dissimilar(B, 8, A, 8, C);
			cout << "Уникальные элементы массива B\n";
			print_arr(C, r);
		}
		else if (nz == 5)
		{
			/*Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором
			нужно собрать элементы массивов A и B, которые не являются общими для них.*/
			system("cls");
			int A[5], B[5], C[10], r;
			creat(A, 5, 1, 50, positive);
			cout << "Массив A\n";
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			cout << "Массив B\n";
			print_arr(B, 5);
			r = dis(A, 5, B, 5, C);
			cout << "Массив c уникальными элементами двух массивов\n";
			print_arr(C, r);
		}
		else
		{
			cout << "Такого задания не существует \n";
		}
	}
}