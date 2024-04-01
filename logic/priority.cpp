#include "priority.h"


int priority(char a) {
	switch (a) {
	case '!':
		return 4;
	case '&':
		return 3;
	case '|':
		return 2;
	case '>':
		return 1;
	case '~':
		return 0;
	case '(':
		return -1;
	default:
		return -2;
	}
}
