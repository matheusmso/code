#include <bits/stdc++.h>
using namespace std;

const int N = 3e3+7;
int n, x;
set<int> s;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &x);
        s.insert(x);
    }
    for (int i = 1; i <= N; i++) {
        if (!s.count(i)) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
