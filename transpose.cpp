#include <iostream>
using namespace std;
/*
2.7 Многомерные массивы
9 out of 10 steps passed
2 out of 4 points  received
Напишите функцию, которая принимает на вход целочисленную матрицу MM (другими словами, просто двумерный целочисленный массив) размера rows \times colsrows×cols, и возвращает транспонированную матрицу M^TM 
T
  (тоже двумерный целочисленный массив) размера cols \times rowscols×rows. Если в MM на пересечении ii-ой строки и jj-ого столбца стояло число xx, то на пересечении  jj-ой строки и ii-ого столбца в матрице M^TM 
T
  тоже будет стоять число xx, или другими словами M^T[j][i] = M[i][j]M 
T
 [j][i]=M[i][j].

Обратите внимание, что вам неизвестно, каким именно способом выделялась память для массива MM. Выделять память под массив M^TM 
T
  можете любым удобным вам способом. Изменять исходную матрицу нельзя.

Требования к реализации: при выполнении этого задания вы можете определять любые вспомогательные функции. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.
*/

int ** transpose(int **m, unsigned rows, unsigned cols)
{
	int **res = new int *[cols];
	for (int i = 0; i < cols; i++)
		res[i] = new int[rows];
	for (int i = 0; i < cols; i++)
		for (int j = 0; j < rows; j++)
			res[i][j] = m[j][i];
	return res;
}

int main()
{
	int rows = 4;
	int cols = 5;
	int **m = new int *[rows];
	for (int i = 0; i < rows; i++)
		m[i] = new int[cols];
	for (int i = 0; i != rows; i++)
	{
		for (int j = 0; j != cols; j++)
			m[i][j] = i*cols + j;
	}
	for (int i = 0; i != rows; i++)
	{
		for (int j = 0; j != cols; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}
	m = transpose(m, rows, cols);
	for (int i = 0; i != cols; i++)
	{
		for (int j = 0; j != rows; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}
	return 0;
}