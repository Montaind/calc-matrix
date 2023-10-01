#include <iostream>
#include <cstdlib>
#include "Matrix.h"
#include <string>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int n;
	int m;
	int x;
	string z;
	int a;
	double arr[10][10];
	double arr1[10][10];
	double arr2[10][10];
	cout << "Ввести рандомно или вручную? 1) Для того чтобы ввести вручную введите 1; 2) Для ввода рандомом от 0 до 11 введите 2" << endl;
	cout << "Ваш выбор: ";
	cin >> x;
	while (x != 1 && x != 2) {
		cout << "Ваш выбор: ";
		cin >> x;
	}
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите кроичество столбцов: ";
	cin >> m;
	if (x == 1) {
		enter(arr, n, m);
		cout << "Полученная матрица:" << endl;
		coutarr(arr, n, m);
	}
	else if (x == 2) {
		randenter(arr, n, m);
		cout << "Вот ваша матрица: " << endl;
		coutarr(arr, n, m);
	}
	cout << "\t\t\tПроведем вычисление с матрицами" << endl;
	cout << "Веберите операцию: *,/,+,- " << endl;
	cout << "Ваш выбор: ";
	cin >> z;
	if (z == "*") {
		cout << "Вы выбрали операцию умножения матрицы на чило" << endl;
		cout << "Введите число на которое нужно умножить: ";
		cin >> a;
		multi(arr, n, m, a);
		cout << "Вот получившаяся матрица: " << endl;
		coutarr(arr, n, m);
	}
	else if (z == "/") {
		cout << "Вы выбрали операцию деление матрицы на чило" << endl;
		cout << "Введите число на которое нужно делить: ";
		cin >> a;
		if (a == 0) {
			cout << "Так делать нельзя!";
		}
		else {
			div(arr, n, m, a);
			cout << "Вот получившаяся матрица: " << endl;
			coutarr(arr, n, m);
		}
	}
	else if (z == "+") {
		cout << "Вы выбрали операцию сложения матриц" << endl;
		cout << "Для этого мы должны заполнить еще одну матрицу!Заполнить: 1) Вручную; 2) Рандомно: ";
		cin >> x;
		if (x == 2) {
			randenter(arr1, n, m);
			cout << "Вот заполненая матрица 2: " << endl;
			coutarr(arr1, n, m);
		}
		else if (x == 1) {
			enter(arr1, n, m);
			cout << "Вот заполненая матрица 2: " << endl;
			coutarr(arr1, n, m);
		}
		plusik(arr, arr1, arr2, n, m, n, m);
		cout << "Результат сложения матриц: " << endl;
		coutarr(arr2, n, m);
	}
	else if (z == "-") {
		cout << "Вы выбрали операцию вычитание матриц" << endl;
		cout << "Для этого мы должны заполнить еще одну матрицу!Заполнить: 1) Вручную; 2) Рандомно: ";
		cin >> x;
		if (x == 2) {
			randenter(arr1, n, m);
			cout << "Вот заполненая матрица 2: " << endl;
			coutarr(arr, n, m);
		}
		else if (x == 1) {
			enter(arr1, n, m);
			cout << "Вот заполненая матрица 2: " << endl;
			coutarr(arr1, n, m);
		}
		min(arr, arr1, arr2, n, m, n, m);
		cout << "Результат вычитания матриц: " << endl;
		coutarr(arr2, n, m);
	}
}