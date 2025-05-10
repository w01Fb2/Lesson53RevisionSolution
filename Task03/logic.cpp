// Количество строк с большим количество положительных элементов
// [The Number of rows with a large number of positive elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию(или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).

#include "logic.h"

bool isPositiveMoreThenOther(int* raw, int m) {
	int count = 0;

	for (int j = 0; j < m; j++)
	{
		if (raw[j] > 0) {
			count++;
		}
		return count > m - count;
	}
}

int count_rows_with_more_positive_values(int** matrix, int n, int m) {
	if (matrix == nullptr || m <= 0 || n <= 0) {

	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (isPositiveMoreThenOther(matrix[i], m)) {
			count++;
		}
	}

	return count;
}