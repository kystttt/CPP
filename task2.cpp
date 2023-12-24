#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int a) {
	int temp = sqrt(a);
	int cdel = 0, prime = 0;
	for (int i = 1; i <= temp; i++) {
		if (a % i == 0) {
			cdel += 2;
		}
	}
	if (cdel == 2) {
		prime = 1;
	}
	return prime;
}

int main() {
	int n;
	cin >> n;
	int *num;
	num = new int[n];
	for (int j = 0; j < n; j++) {
		cin >> num[j];
	}
	int i = 1;
	int* answer;
	answer = new int[n];
	for (int j = 0; j < n; j++) {
		while (true) {
			if (isPrime(num[j] + i) == 1) {
				answer[j] = num[j] + i;
				break;
			}
			else if (isPrime(num[j] - i) == 1) {
				answer[j] = num[j] - i;
				break;
			}
			i++;
		}
	}
	for (int j = 0; j < n; j++) {
		cout << "For " << " " << num[j] << " " << "The nearest prime number is" << " " << answer[j] << endl;
	}
	return 0;
}
