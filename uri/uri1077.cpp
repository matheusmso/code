#include <bits/stdc++.h>

using namespace std;

int prec(char c) {
    if (c == '(')
        return 0;
    if (c == '+')
        return 1;
    if (c == '-')
        return 1;
    if (c == '*')
        return 2;
    if (c == '/')
        return 2;
    if (c == '^')
        return 3;
}

int main() {
    int n;
    scanf("%d\n", &n);
    while (n--) {
        stack<char> s;
        char c;
        while (scanf("%c", &c)) {
            if (c == '\n')
                break;
            else if (c == '(' || c == ')' || c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
                if (s.size() == 0 || c == '(') 
                    s.push(c);
                else if (c == ')') {
                    while (s.size() > 0 && s.top() != '(') {
                        putchar(s.top());
                        s.pop();
                    }
                    s.pop();
                }
                else {
                    while (s.size() > 0 && prec(c) <= prec(s.top())) {
                        putchar(s.top());
                        s.pop();
                    }
                    s.push(c);
                }
            }
            else 
                putchar(c);
        }
        while (s.size() > 0) {
            putchar(s.top());
            s.pop();
        }
        putchar('\n');
    }
    return 0;
}



