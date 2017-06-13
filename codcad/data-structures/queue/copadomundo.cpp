#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<char> q;
    for (int i = 0; i < 16; i++)
        q.push('A'+i);
    for (int i = 0; i < 15; i++) {
        int x, y;
        char a, b;
        scanf(" %d %d", &x, &y);
        a = q.front();
        q.pop();
        b = q.front();
        q.pop();
        q.push(x > y ? a : b);
    }
    printf("%c\n", q.front());
    return 0;
}

