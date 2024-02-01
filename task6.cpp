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


 int isPrime(int sumline) { //проверяет является ли сумма строки простым числом
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


 /*void nsort(int** array, int n, int m) {
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < m; j++) {
			 swap(array[i][j], array[i + 1][j]);
		 }
	 }
 }*/


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

/*
	for (int i = 0; i < n; i++) {
		int tmp = linesum(matrix, i, m); //создаем и инициализируем переменную, в которой будем записана сумма i-й строки 
		if (isPrime(tmp) != 0) {//проверяем ложно ли это условие



		}





	}*/


	for (int i = 0; i < n - 1; i++) {
		int tmp = linesum(matrix, i, m);
		if (isPrime(tmp) == 0) {
			cout << "xyi" << endl;
		}
		else {
			if (mxinl(matrix, i, m) < mxinl(matrix, i+1, m)) {
				swap(matrix[i], matrix[i+1]);
			}
		}
	}






	//выводим матрицу в консоль
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "--------------------------" << endl;
	for (int i = 0; i < n; i++) {
		cout << linesum(matrix, i, m) << endl;
	}
	cout << "-----------------------" << endl;
	for (int i = 0; i < n; i++) {
		cout << mxinl(matrix, i, m) << endl;
	}

	return 0;
}
