#pragma once
#ifndef _FIELD_H_
#define _FIELD_H_
#define MAX_SIZE 10000
//������ �������� ����. n - �������, m - �������
int Read_Field_Size (int *n, int *m);
//������ ��������� � �������� ������� ������
int Read_Field_Pos (int n, int m, int *start_row, int *start_col, int *end_row, int *end_col);
//���������� ����, ��������� � ������� path ����� i
void Get_Path (int n, int m, int start_row, int start_col, int end_row, int end_col, int path[MAX_SIZE], int *i);

#endif


