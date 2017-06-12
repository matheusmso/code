#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n;
set<int> s;

int main() {
    scanf(" %d", &n);
    while (n--) {
        int x;
        scanf(" %d", &x);
        s.insert(x);
    }
    printf("%d\n", s.size());
    return 0;
}

