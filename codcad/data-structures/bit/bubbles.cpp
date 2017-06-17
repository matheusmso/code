#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, v[N], tree[N];

void up(int node, int value) {
    while (node <= n) {
        tree[node] += value;
        node += (node & -node);
    }
}

int sum(int node) {
    int ans = 0;
    while (node > 0) {
        ans += tree[node];
        node -= (node & -node);
    }
    return ans;
}

int main() {
    while (scanf(" %d", &n) != EOF && n) {
        for (int i = 0; i < n; i++) {
            scanf(" %d", v+i);
            tree[i] = 0;
        }
        tree[n] = 0;
        int count = 0;
        for (int i = n-1; i >= 0; i--) {
            count += sum(v[i]-1);
            up(v[i], 1);
        }
        printf("%s\n", count%2 ? "Marcelo" : "Carlos");
    }
    return 0;
}

