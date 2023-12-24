#include <iostream>
#include <string>

using namespace std;

int isPalindrom(int a) {
	string str = to_string(a), newstr;
	int lens = str.length(), flag = 0;
	for (int i = lens - 1; i >= 0; i--) {
		newstr += str[i];
		}
	if (newstr == str) {
		flag = 1;
	}
	return flag;
}

int main() {
	int M, N, answer = 0;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		if (isPalindrom(i) == 1) {
			answer += i;
		}
	}
	cout << "Palindrom's sum is: " << answer << endl;
	return 0;
}
