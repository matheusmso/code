#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);
    while (n--) {
        stack<char> s;
        char c;
        int count = 0;
        do {
            c = getchar();
            if (c == '<')
                s.push(c);
            if (c == '>') {
                if (s.size() > 0 && s.top() == '<') {
                    s.pop();
                    count++;
                }
                else
                    s.push(c);
            }
        } while (c != '\n');
        printf("%d\n", count);
    }
    return 0;
}

