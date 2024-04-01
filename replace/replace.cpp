#include "replace.h"


string replace(string str) {
	string newstr;
	int len = str.length();
	for (int i = 0; i < len;) {
		if (str[i] == 'A' && i + 2 < len && str[i + 2] == 'D') {
			newstr += ' & ';
			i += 3;
		}
		else if (str[i] == 'N' && i + 2 < len && str[i + 2] == 'T') {
			newstr += " ! ";
			i += 3;
		}
		else if (str[i] == 'O' && i + 1 < len && str[i + 1] == 'R') {
			newstr += " || ";
			i += 2;

		}
		else if (str[i] == 'T' && i + 3 < len && str[i + 3] == 'E') {
			newstr += " 1 ";
			i += 4;
		}
		else if (str[i] == 'F' && i + 4 < len && str[i + 4] == 'E') {
			newstr += " 0 ";
			i += 5;
		}
		else {
			newstr += str[i];
			i++;
		}

	}
	return newstr;
}
