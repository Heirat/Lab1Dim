/*
���������� ���� ���������� ���-13��
������������ ������ �1. ���������� �������. 1.3 �, 2-2.
��������� ������� ����, ������� ���������� ������ ������� ������ �� ��������� ����.
����: ��������� � �������� ������� ����� ������������ ����.
�����: ������������������ �����, �������� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 1000

int main() {
	setlocale(LC_ALL, "RUS");

	int Field[MAX_SIZE];
	int n, m;
	int start_r, start_c, fnsh_r, fnsh_c;

	printf ("������� ���������� ����� � ����\n");
	if (scanf ("%d", &m) == 0)
	{
		printf ("\n������������ ����\n");
		system("pause");
		return 1;
	}
	printf ("������� ���������� ������� � ����\n");
	if (scanf ("%d", &n) == 0)
	{
		printf ("\n������������ ����\n");
		system("pause");
		return 1;
	}

	printf ("������� ��������� � �������� ������� � ����������� ������-�������:\n");
	if (scanf ("%d%d%d%d", &start_r, &start_c, &fnsh_r, &fnsh_c) != 4)
	{
		printf ("\n������������ ����\n");
		system("pause");
		return 1;
	}



	system("pause");
	return 0;
}
