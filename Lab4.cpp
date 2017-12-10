#include "stdafx.h"
#include<iostream>
#include<math.h>
#define n 5

using namespace std;

class Matrix
{
private:
	int a[n][n];
	int column_sum[n];
	int i, j, k, c, product; // c - temporary variable, i - raw, j - column
public:
	void matrix_input();
	void matrix_output();
	void matrix_sorting();
	void column_summation_and_product();
};

void Matrix::matrix_input()
{
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "Please, enter the element [" << i + 1 << ";" << j + 1 << "] =";
			cin >> a[i][j];
			cout << endl;
		}
	}
}

void Matrix::matrix_output()
{
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << a[i][j] << "\t";
		}
	}
}

void Matrix::matrix_sorting()
{
	for (i = 0; i < n; i++) {
		for (k = n - 1; k >= 0; k--) {
			for (j = 0; j < k; j++) {
				if (a[i][j] < a[i][j + 1]) {
					c = a[i][j];     
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = c;
				}
			}
		}
	}
}


void Matrix::column_summation_and_product()
{
	cout << endl;
	product = 1;
	for (j = 1; j < n; j++) {
		column_sum[j] = { 0 };
		for (i = 0; i < n; i++) {
			if (j > i) {
				column_sum[j] += a[i][j];
			}
		}
		product *= column_sum[j];
		cout << "Sum of " << j + 1 << " column is " << column_sum[j] << endl;
	}
	cout << "Product: " << product;
}

int main()
{
	Matrix Lab4;
	Lab4.matrix_input();
	cout << endl;
	cout << "Entered matrix:\n";
	Lab4.matrix_output();
	cout << endl;
	Lab4.matrix_sorting();
	cout << "\nNew matrix:\n";
	Lab4.matrix_output();
	cout << endl;
	Lab4.column_summation_and_product();
	cout << endl;

	system("pause");

}
