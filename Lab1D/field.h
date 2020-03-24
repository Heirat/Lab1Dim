#pragma once
#ifndef _FIELD_H_
#define _FIELD_H_
#define MAX_SIZE 10000
#define ER_WRONG_INP 1 //������������ ����
#define ER_INCORRECT_INP 2 //������������ �������� �����
//������ � �������� �������� ����. n - �������, m - �������
int Read_field_size (int *n, int *m);

//������ � �������� ��������� � �������� ������� ������
int Read_field_pos (int n, int m, int *start_row, int *start_col, int *end_row, int *end_col);

//���������� ����, ��������� � ������� path ����� len
void Get_path (int n, int m, int start_row, int start_col, int end_row, int end_col, int path[MAX_SIZE], int *len);

//����� ����
void Print_path (int path[MAX_SIZE], int len);

#endif
//�������� �������� i �� len, �������� ������� 

