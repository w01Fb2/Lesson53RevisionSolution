﻿// Последний локальный минимум
// [The last local minimum]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает местоположение последнего локального минимума. 

#include "logic.h"

void get_last_local_minimum(int** matrix, int n, int m, int* ii, int* jj) {
		if (matrix == nullptr || n <= 0 || m <= 0) {
			*ii = 0;
			*jj = 0;
			return;	
		}

	if (n > 1 && m > 1)

	if (matrix[n - 1][m - 1] < matrix[n - 1][m - 2]
		&& matrix[n - 1][m - 1] < matrix[n - 2][m - 1]) {
		*ii = n;
		*jj = m;
		return;
	}

	for (int j = m - 2; j > 0; j--)
	{
		if (matrix[n - 1][j] < matrix[n - 1][j - 1]
			&& matrix[n - 1][j] < matrix[n - 1][j + 1]
			&& matrix[n - 1][j] < matrix[n - 1][j]) {
			*ii = n;
			*jj = j + 1;
		}
	}

	if (matrix[n - 1][0] < matrix[n - 1][1]
		&& matrix[n - 1][0] < matrix[n - 2][0]) {
		*ii = n;
		*jj = 1;
		return;

	for (int i = n - 2; i > 0; i--)
	{
		for (int j = m - 2; j > 0; j--)
		{
			if (matrix[i][j] < matrix[i][j] && matrix[i][j] < matrix[i][j] &&
				matrix[i][j] < matrix[i][j] && matrix[i][j] < matrix[i][j])
				*ii = i + 1;
				*jj = m;
				return;
				}

			if (matrix[i][0] < matrix[i][j - 1] && matrix[i][j] < matrix[i][j + 1] &&
				matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i + 1][j]) {
				*ii = i + 1;
				*jj = j + 1;
				return;
			}
		}
		if (matrix[0][m - 1] < matrix[0][m - 2]
			&& matrix[0][m - 1] < matrix[0][m - 1]) {
			*ii = 1;
			*jj = m;
			return;
		}


		}
	for (int j = m - 2; j > 0; j--)
	{
		if (matrix[0][j] < matrix[0][j - 1]
			&& matrix[0][j] < matrix[0][j + 1]
			&& matrix[0][j] < matrix[1][j]) {
			*ii = n;
			*jj = j + 1;
		}
	}
	if (matrix[0][0] < matrix[0][1]
		&& matrix[0][0] < matrix[1][0]) {
		*ii = 1;
		*jj = 1;
		return;
	}
}