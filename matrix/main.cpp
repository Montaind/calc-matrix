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
	cout << "������ �������� ��� �������? 1) ��� ���� ����� ������ ������� ������� 1; 2) ��� ����� �������� �� 0 �� 11 ������� 2" << endl;
	cout << "��� �����: ";
	cin >> x;
	while (x != 1 && x != 2) {
		cout << "��� �����: ";
		cin >> x;
	}
	cout << "������� ���������� �����: ";
	cin >> n;
	cout << "������� ���������� ��������: ";
	cin >> m;
	if (x == 1) {
		enter(arr, n, m);
		cout << "���������� �������:" << endl;
		coutarr(arr, n, m);
	}
	else if (x == 2) {
		randenter(arr, n, m);
		cout << "��� ���� �������: " << endl;
		coutarr(arr, n, m);
	}
	cout << "\t\t\t�������� ���������� � ���������" << endl;
	cout << "�������� ��������: *,/,+,- " << endl;
	cout << "��� �����: ";
	cin >> z;
	if (z == "*") {
		cout << "�� ������� �������� ��������� ������� �� ����" << endl;
		cout << "������� ����� �� ������� ����� ��������: ";
		cin >> a;
		multi(arr, n, m, a);
		cout << "��� ������������ �������: " << endl;
		coutarr(arr, n, m);
	}
	else if (z == "/") {
		cout << "�� ������� �������� ������� ������� �� ����" << endl;
		cout << "������� ����� �� ������� ����� ������: ";
		cin >> a;
		if (a == 0) {
			cout << "��� ������ ������!";
		}
		else {
			div(arr, n, m, a);
			cout << "��� ������������ �������: " << endl;
			coutarr(arr, n, m);
		}
	}
	else if (z == "+") {
		cout << "�� ������� �������� �������� ������" << endl;
		cout << "��� ����� �� ������ ��������� ��� ���� �������!���������: 1) �������; 2) ��������: ";
		cin >> x;
		if (x == 2) {
			randenter(arr1,n,m);
			cout << "��� ���������� ������� 2: " << endl;
			coutarr(arr1, n, m);
		}
		else if (x == 1) {
			enter(arr1, n, m);
			cout << "��� ���������� ������� 2: " << endl;
			coutarr(arr1, n, m);
		}
		plusik(arr, arr1, arr2,n,m,n,m);
		cout << "��������� �������� ������: " << endl;
		coutarr(arr2, n, m);
	}
	else if (z == "-") {
		cout << "�� ������� �������� ��������� ������" << endl;
		cout << "��� ����� �� ������ ��������� ��� ���� �������!���������: 1) �������; 2) ��������: ";
		cin >> x;
		if (x == 2) {
			randenter(arr1, n, m);
			cout << "��� ���������� ������� 2: " << endl;
			coutarr(arr, n, m);
		}
		else if (x == 1) {
			enter(arr1, n, m);
			cout << "��� ���������� ������� 2: " << endl;
			coutarr(arr1, n, m);
		}
		min(arr, arr1, arr2, n, m, n, m);
		cout << "��������� ��������� ������: " << endl;
		coutarr(arr2, n, m);
	}
}