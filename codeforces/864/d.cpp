#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int v[N], n, f[N];
bool p[N];
vector<int> need;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        f[v[i]]++;
    }
    for (int i = 1; i <= n; i++)
        if (f[i] == 0)
            need.push_back(i);
    int pos = 0;
    for (int i = 0; i < n && pos < need.size(); i++) {
        if (f[v[i]] != 1) {
            if (v[i] > need[pos] || p[v[i]]) {
                f[v[i]]--;
                v[i] = need[pos++];
            }
        }
        p[v[i]] = true;
    }
    printf("%d\n", need.size());
    for (int i = 0; i < n; i++)
        printf("%d%c", v[i], " \n"[i == n-1]);
    return 0;
}

