#include "cat.h"
#include "BubbleSort.h"


int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество котов: ";
	int n;
	cin >> n;
	cat* arcat = new cat[n];
	int* array = new int[n];
	cout << "Введите котов: " << endl;
	for (int i = 0; i < n; i++) {
		arcat[i] >> cin;
	}
	cout << "Введите целые числа: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	bubbleSort(arcat, n);
	bubbleSort(array, n);
	for (int i = 0; i < n; i++) {
		cout << "Имя котика: " << arcat[i].name << " Вес котика: " << arcat[i].weight << endl;

	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << endl;
	}
	return 0;
}
