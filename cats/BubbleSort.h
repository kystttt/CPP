#pragma once
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


template<typename T> void bubbleSort(T* array, int arraylen);
template<typename T> void bubbleSort(T* array, int arraylen) {
	for (int i = 0; i < arraylen - 1; i++) {
		for (int j = 0; j < arraylen - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j + 1], array[j]);
			}
		}
	}
}
