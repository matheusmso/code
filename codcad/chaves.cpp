#include <bits/stdc++.h>
using namespace std;

char s[107];
int n;

int main() {
    scanf(" %d", &n);
    stack<int> p;
    bool correct = true;
    while (scanf(" %[^\n]", s) != EOF && correct) {
        int size = strlen(s);
        for (int i = 0; i < size && correct; i++) {
            char c = s[i];
            if (c == '{')
                p.push(c);
            else if (c == '}') {
                if (!p.empty()) p.pop();
                else correct = false;
            }
        }
    }
    if (p.empty() && correct)
            printf("S\n");
    else
        printf("N\n");
    return 0;
}

