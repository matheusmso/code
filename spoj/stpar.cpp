#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    while (scanf(" %d", &t) != EOF && t) {
        stack<int> s;
        int step = 1;
        for (int i = 0; i < t; i++) {
            while (!s.empty() && s.top() == step) {
                s.pop();
                step++;
            }
            int x;
            scanf(" %d", &x);
            if (x != step)
                s.push(x);
            else {
                step++;
                while (!s.empty() && s.top() == x-1) {
                    s.pop();
                    x--;
                }
            }
        }
        int k;
        if (!s.empty()) {
            k = s.top();
            s.pop();
        }
        while (!s.empty()) {
            if (k > s.top()) {
                printf("no\n");
                break;
            }
            else {
                k = s.top();
                s.pop();
            }
        }
        if (s.empty())
            printf("yes\n");
    }
    return 0;
}

