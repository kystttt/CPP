#include <iostream>
#include <cmath>

using namespace std;

double perimetr(int *array, int cordC){
	double per = 0;
	for (int i = 0; i < cordC - 2; i+= 2) {
		per += sqrt(((array[i + 2] - array[i]) * (array[i + 2] - array[i])) + ((array[i + 3] - array[i + 1]) * (array[i + 3] - array[i + 1])));		
	}


	per += sqrt(((array[0] - array[cordC-2]) * (array[0] - array[cordC - 2])) + ((array[1] - array[cordC - 1]) * (array[1] - array[cordC - 1])));

	return per;
}

int main() {
	int* coords, n;
	cin >> n;
	int cordC = n * 2;
	coords = new int[cordC];
	
	for (int i = 0; i < cordC; i++) {
		cin >> coords[i];
	}
	cout << "Perimetr of " << n << " vertices is: " << perimetr(coords, cordC);
	return 0;
}
