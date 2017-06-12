#include <bits/stdc++.h>
using namespace std;

int a, b;
set<int> sa, sb;

int main() {
    scanf(" %d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        int x;
        scanf(" %d", &x);
        sa.insert(x);
    }
    int e = 0;
    for (int i = 0; i < b; i++) {
        int x;
        scanf(" %d", &x);
        sb.insert(x);
    }
    for (int i : sa)
        if (sb.count(i))
            e++;
    printf("%d\n", min(sa.size(), sb.size()) - e);
    return 0;
}

