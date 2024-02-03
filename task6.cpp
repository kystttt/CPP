#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int linesum(int** array, int n, int m) {	//считает сумму строки
	int lsum = 0;
	for (int i = 0; i < m; i++) {
		lsum += array[n][i];
	}

	return lsum;
}


bool isPrime(int sumline) { //проверяет является ли сумма строки простым числом
	int temp = sqrt(sumline);
	int counter = 0;
	for (int i = 1; i <= temp; i++) {
		if (sumline % i == 0) {
			counter += 2;
		}
	}
	if (counter == 2) {
		return true;
	}
	return false;
}

int mxinl(int** array, int n, int m) { //находит максимальный элемент строки матрицы
	int mx = -1000;
	for (int i = 0; i < m; i++) {
		mx = max(array[n][i], mx);
	}
	return mx;
}




int main() {
	int n, m;
	cout << "Inter number of lines: ";
	cin >> n;
	cout << "Inter number of columns: ";
	cin >> m;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) { //создаем двумерный динамический массив
		matrix[i] = new int[m];
	}

	//Заполняем массив с клавиатуры
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}

	int* array = new int[n];
	int kok = 0;

	for (int p = 0; p < n; p++) {
		int tmp = linesum(matrix, p, m); //создаем и инициализируем переменную, в которой будет записана сумма i-й строки
		if (isPrime(tmp) != 0) { //проверяем является ли сумма всех элементов строки простым числом
			array[kok++] = p;
		}
	}


	for (int k = 0; k < kok ; k++) {
		for (int i = 0; i < kok - 1; i++) {
			if (mxinl(matrix, array[i], m) < mxinl(matrix, array[i+1], m)) {
				swap(matrix[array[i]], matrix[array[i + 1]]);
			}
		}
	}










	//выводим матрицу в консоль
	cout << "--------------------------" << endl;
	if (kok != 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
		cout << "--------------------------" << endl;
	}
	else {
		cout << "Undefiend" << endl;
	}

	return 0;
}
