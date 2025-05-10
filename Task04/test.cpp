﻿#include "test.h"

// wrong size
void test01() {
	int n = -3, m = 3;
	int expected = 0;
	int** matrix = nullptr;
	print_test(matrix, n, m, expected, "test01");
}

// wrong size
void test02() {
	int n = 3, m = -3;
	int expected = 0;
	int** matrix = nullptr;
	print_test(matrix, n, m, expected, "test02");
}

// wrong size
void test03() {
	int n = 0, m = 3;
	int expected = 0;
	int** matrix = nullptr;
	print_test(matrix, n, m, expected, "test03");
}

// wrong size
void test04() {
	int n = 3, m = 0;
	int expected = 0;
	int** matrix = nullptr;
	print_test(matrix, n, m, expected, "test04");
}

// matrix == null 
void test05() {
	int n = 1, m = 1;
	int expected = 0;
	int** matrix = nullptr;
	print_test(matrix, n, m, expected, "test05");
}

// matrix with only one element
void test06() {
	int n = 1, m = 1;
	int expected = 7;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {7};
	
	print_test(matrix, n, m, expected, "test06");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix == horizontal vector
void test07() {
	int n = 1, m = 4;
	int expected = 5;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1, 2, 3, 4};

	print_test(matrix, n, m, expected, "test07");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix == vertical vector
void test08() {
	int n = 4, m = 1;
	int expected = 10;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1};
	matrix[1] = new int[m] {2};
	matrix[2] = new int[m] {3};
	matrix[3] = new int[m] {4};
	
	print_test(matrix, n, m, expected, "test08");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix 2x2 with max and min in one column
void test09() {
	int n = 2, m = 2;
	int expected = -1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 7};
	matrix[1] = new int[m] {1, -8};

	print_test(matrix, n, m, expected, "test09");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix 3x3 where min and max in different columns
void test10() {
	int n = 3, m = 3;
	int expected = 17;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1, 2, 3};
	matrix[1] = new int[m] {1, 5, 3};
	matrix[2] = new int[m] {1, 2, 8};

	print_test(matrix, n, m, expected, "test10");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix with all zero elements
void test11() {
	int n = 3, m = 3;
	int expected = 0;

	int** matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m] {0, 0, 0};
	}

	print_test(matrix, n, m, expected, "test11");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// identity matrix 3x3
void test12() {
	int n = 3, m = 3;
	int expected = 9;

	int** matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m] {1, 1, 1};
	}

	print_test(matrix, n, m, expected, "test12");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix with all positive, negative and zero elements (base case)
void test13() {
	int n = 3, m = 5;
	int expected = 27;

	int** matrix = new int* [n];
	matrix[0] = new int[m] { 3, 1,  0, -1, 6};
	matrix[1] = new int[m] {-3, 3, -3,  0, 5};
	matrix[2] = new int[m] { 1, 6,  4,  3, 4};

	print_test(matrix, n, m, expected, "test13");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix with only extreme elements
void test14() {
	int n = 2, m = 4;
	int expected = 12;

	int** matrix = new int* [n];
	matrix[0] = new int[m] { 2, 2, 1, 1 };
	matrix[1] = new int[m] { 1, 2, 1, 2 };

	print_test(matrix, n, m, expected, "test14");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

// matrix with only extreme elements
void test15() {
	int n = 5, m = 4;
	int expected = 75;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = (i + 1) * (j + 1);
		}
	}
	
	print_test(matrix, n, m, expected, "test15");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}