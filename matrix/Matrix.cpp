#include <iostream>
#include "Matrix.h"

using namespace std;
void randenter(double arr[][10], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 21 - 10;
		}
	}
}

void coutarr(double arr[][10], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t\t";
		}
		cout << "\n";
	}
}

void enter(double arr[][10], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Введите " << i << j << " элемент: ";
			cin >> arr[i][j];
		}
	}

}

void multi(double arr[][10], int n, int m, int a) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] *= a;
		}
	}
}

void div(double arr[][10], int n, int m, int a) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] /= a;
		}
	}
}

void plusik(double arr[][10], double arr1[][10],double arr2[][10], int n, int m, int n1, int m1) {
	if (n == n1 && m == m1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				arr2[i][j] = arr[i][j] + arr1[i][j];
			}
		}
	}
	else {
		cout << "Матрицы не равны между собой!" << endl;
	}
}

void min(double arr[][10], double arr1[][10], double arr2[][10], int n, int m, int n1, int m1) {
	if (n == n1 && m == m1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				arr2[i][j] = arr[i][j] - arr1[i][j];
			}
		}
	}
	else {
		cout << "Матрицы не равны между собой!" << endl;
	}
}
