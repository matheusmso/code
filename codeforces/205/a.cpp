#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n;
pair<int, int> v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        v[i] = {x, i};
    }
    sort(v, v+n);
    if (v[0].first == v[1].first)
        printf("Still Rozdil\n");
    else
        printf("%d\n", v[0].second+1);
    return 0;
}

