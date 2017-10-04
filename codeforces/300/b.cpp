#include <bits/stdc++.h>
using namespace std;

const int N = 50;
vector<int> v[N];
int n, m, t[N*N];

int main() {
    int f = 0;
    scanf(" %d %d", &n, &m);
    memset(t, -1, sizeof(t));
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        if (t[a] == -1 && t[b] == -1) {
            v[f].push_back(a);
            v[f].push_back(b);
            t[a] = t[b] = f;
            f++;
        }
        else if (t[a] == -1) {
            v[t[b]].push_back(a);
            t[a] = t[b];
        }
        else if (t[b] == -1) {
            v[t[a]].push_back(b);
            t[b] = t[a];
        }
        else if (t[a] != t[b]) {
            printf("-1\n");
            return 0;
        }
    }
    for (f = 1; t[f] != -1; f++);
    for (int i = 0; i < n/3; i++) {
        if (v[i].size() > 3) {
            printf("-1\n");
            return 0;
        }
        while (v[i].size() < 3) {
            if (f > n) {
                printf("-1\n");
                return 0;
            }
            v[i].push_back(f);
            t[f] = i;
            for (f; t[f] != -1; f++);
        }
    }
    for (int i = 0; i < n/3; i++) {
        for (int k : v[i])
            printf("%d ", k);
        printf("\n");
    }
    return 0;
}
        
    
