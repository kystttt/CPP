#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// Создание файла
	ofstream MyFile("source.txt");
	MyFile << "aaaaabbbccaaaaaahbjkkkkkkkkkklgagwssgwwwwsssssgwwssssssssgwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
	MyFile.close();

	string myText;
	ifstream MyReadFile("source.txt");


	int  answer = 0, temp = 1;


	// построчное чтение файла
	while (getline(MyReadFile, myText)) {
		int Textlen = myText.length();
		for (int i = 0; i < Textlen; i++) {
			if (myText[i] == myText[i + 1]) {
				temp++;
				answer = max(answer, temp);
			}
			else {
				temp = 1;
			}
			//cout << myText[i] << endl;
		}
	}
	cout << answer << endl;
	MyReadFile.close();
	return 0;
}
