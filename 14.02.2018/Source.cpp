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
		cout << "������� ����� �������, 0 - ��� ������ ";
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*���� ��� �������, ������������� �� ����������� : �[n] � B[m].�����������
			������ C[n + m], ��������� �� ��������� �������� � � �, �������������
			�� �����������(������ � �� ������ �������������).*/
			system("cls");
			int A[5], B[5], C[10];
			creat(A, 5, 1, 50, positive);
			sort(A, 5, 1);
			cout << "������ A\n";
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			sort(B, 5, 1);
			cout << "������ B\n";
			print_arr(B, 5);
			newArr(A, 5, B, 5, C, 10);
			cout << "������ C\n";
			print_arr(C, 10);
		}
		else if (nz == 2)
		{
			/*���� ��� ������� : �[n] � B[m].���������� ������� ������ ������,
			� ������� ����� ������� ����� �������� ���� ��������.*/
			system("cls");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			cout << "������ A\n";
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			cout << "������ B\n";
			print_arr(B, 8);
			r = common(A, 8, B, 8, C);
			if (r > 0)
			{
				cout << "������ � ������ ����������\n";
				print_arr(C, r);
			}
		}
		else if (nz == 3)
		{
			/*���� ��� ������� : �[n] � B[m].���������� ������� ������ ������,
			� ������� ����� ������� �������� ������� A, ������� �� ���������� � B.*/
			system("cls");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			cout << "������ A\n";
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			cout << "������ B\n";
			print_arr(B, 8);
			r = dissimilar(A, 8, B, 8, C);
			cout << "���������� �������� ������� A\n";
			print_arr(C, r);
		}
		else if (nz == 4)
		{
			/*���� ��� ������� : �[n] � B[m].���������� ������� ������ ������,
			� ������� ����� ������� �������� ������� B, ������� �� ���������� � A.*/
			system("cls");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			cout << "������ A\n";
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			cout << "������ B\n";
			print_arr(B, 8);
			r = dissimilar(B, 8, A, 8, C);
			cout << "���������� �������� ������� B\n";
			print_arr(C, r);
		}
		else if (nz == 5)
		{
			/*���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � �������
			����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.*/
			system("cls");
			int A[5], B[5], C[10], r;
			creat(A, 5, 1, 50, positive);
			cout << "������ A\n";
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			cout << "������ B\n";
			print_arr(B, 5);
			r = dis(A, 5, B, 5, C);
			cout << "������ c ����������� ���������� ���� ��������\n";
			print_arr(C, r);
		}
		else
		{
			cout << "������ ������� �� ���������� \n";
		}
	}
}