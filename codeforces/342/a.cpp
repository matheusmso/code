#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<int> ans[N];
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    for (int i = 0; i < n/3; i++) {
        ans[i].push_back(v[i]);
        ans[i].push_back(v[i+n/3]);
        ans[i].push_back(v[i+2*n/3]);
        if (v[i+2*n/3]%v[i+n/3] != 0 || v[i+n/3]%v[i] != 0 ||
            v[i+2*n/3] == v[i+n/3] || v[i+n/3] == v[i]) {
            printf("-1\n");
            return 0;
        }
    }
    for (int i = 0; i < n/3; i++) {
        for (int k : ans[i])
            printf("%d ", k);
        printf("\n");
    }
    return 0;
}
