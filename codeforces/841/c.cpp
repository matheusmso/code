#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int a[N], aux[N], n;
vector<pair<int, int>> b;

bool comp(int i, int j) {
    return b[i] < b[j];
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", a+i);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        b.push_back({x, i});
    }
    sort(a, a+n, greater<int>());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
        aux[b[i].second] = a[i];
    for (int i = 0; i < n; i++)
        printf("%d ", aux[i]);
    printf("\n");
    return 0;
}


