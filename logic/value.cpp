#include "value.h"


void value(string s) {
    int pr = 0;
    string newstr;
    stack<char>operstck;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ')
            continue;
        if (s[i] == '1' or s[i] == '0')
            newstr.push_back(s[i]);
        if (s[i] == '~') {
            if (operstck.empty() == true) {
                operstck.push(s[i]);
            }
            else {
                if (priority(operstck.top()) == priority(s[i])) {
                    newstr.push_back(operstck.top());
                    operstck.pop();
                    operstck.push(s[i]);
                }
                else if (priority(operstck.top()) < priority(s[i])) {
                    operstck.push(s[i]);
                }
                else {
                    while (priority(operstck.top()) >= priority(s[i])) {
                        newstr.push_back(operstck.top());
                        operstck.pop();
                        if (operstck.empty() == true) break;
                    }
                    operstck.push(s[i]);
                }
            }
        }
        if (s[i] == '>') {
            if (operstck.empty() == true) {
                operstck.push(s[i]);
            }
            else {
                if (priority(operstck.top()) == priority(s[i])) {
                    newstr.push_back(operstck.top());
                    operstck.pop();
                    operstck.push(s[i]);
                }
                else if (priority(operstck.top()) < priority(s[i])) {
                    operstck.push(s[i]);
                }
                else {
                    while (priority(operstck.top()) >= priority(s[i])) {
                        newstr.push_back(operstck.top());
                        operstck.pop();
                        if (operstck.empty() == true) break;
                    }
                    operstck.push(s[i]);
                }
            }
        }
        if (s[i] == '|') {
            if (operstck.empty() == true) {
                operstck.push(s[i]);
            }
            else {
                if (priority(operstck.top()) == priority(s[i])) {
                    newstr.push_back(operstck.top());
                    operstck.pop();
                    operstck.push(s[i]);
                }
                else if (priority(operstck.top()) < priority(s[i])) {
                    operstck.push(s[i]);
                }
                else {
                    while (priority(operstck.top()) >= priority(s[i])) {
                        newstr.push_back(operstck.top());
                        operstck.pop();
                        if (operstck.empty() == true) break;
                    }
                    operstck.push(s[i]);
                }
            }
        }
        if (s[i] == '&') {
            if (operstck.empty() == true) {
                operstck.push(s[i]);
            }
            else {
                if (priority(operstck.top()) == priority(s[i])) {
                    newstr.push_back(operstck.top());
                    operstck.pop();
                    operstck.push(s[i]);
                }
                else if (priority(operstck.top()) < priority(s[i])) {
                    operstck.push(s[i]);
                }
                else {
                    while (priority(operstck.top()) >= priority(s[i])) {
                        newstr.push_back(operstck.top());
                        operstck.pop();
                        if (operstck.empty() == true) break;
                    }
                    operstck.push(s[i]);
                }
            }
        }
        if (s[i] == '!') {
            if (operstck.empty() == true) {
                operstck.push(s[i]);
            }
            else {
                if (priority(operstck.top()) == priority(s[i])) {
                    newstr.push_back(operstck.top());
                    operstck.pop();
                    operstck.push(s[i]);
                }
                else if (priority(operstck.top()) < priority(s[i])) {
                    operstck.push(s[i]);
                }
                else {
                    while (priority(operstck.top()) >= priority(s[i])) {
                        newstr.push_back(operstck.top());
                        operstck.pop();
                        if (operstck.empty() == true) break;
                    }
                    operstck.push(s[i]);
                }
            }
        }
        if (s[i] == '(') {
            operstck.push(s[i]);
        }
        if (s[i] == ')') {
            while (operstck.top() != '(') {
                newstr.push_back(operstck.top());
                operstck.pop();
            }
            operstck.pop();
        }
    }
    while (operstck.empty() == false) {
        newstr.push_back(operstck.top());
        operstck.pop();
    }
    cout << "Польская запись: " << newstr << endl;
    for (int i = 0; i < newstr.size(); i++) {
        if (newstr[i] == '1' or newstr[i] == '0') {
            operstck.push(newstr[i]);
        }
        if (newstr[i] == '!') {
            if (operstck.top() == '1') {
                operstck.pop();
                operstck.push('0');
            }
            else {
                operstck.pop();
                operstck.push('1');
            }
        }
        if (newstr[i] == '&' || newstr[i] == '>' || newstr[i] == '|' || newstr[i] == '~') {
            char b = operstck.top();
            operstck.pop();
            char a = operstck.top();
            operstck.pop();
            operstck.push(logic(newstr[i], a, b));
        }
    }
    cout << "Результат выражения: " << operstck.top() << endl;
}
