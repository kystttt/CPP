#include "logic.h"



char logic(char s, char a, char b) {
    switch (s) {
    case '&':
        if (a == '1' && b == '1')
            return '1';
        else return '0';
    case '|':
        if (a == '0' && b == '0')
            return '0';
        else return '1';
    case '>':
        if (a == '1' && b == '0')
            return '0';
        else return '1';
    case '~':
        if (a == b)
            return '1';
        else return '0';
    default:
        return 'f';
    }
}
