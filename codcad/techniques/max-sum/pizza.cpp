#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int best = 0;
    int ans1 = 0;
    for (int i = 0; i < n; i++) {
        best = max(0, best+v[i]);
        ans1 = max(ans1, best);
    }
    int acc = 0;
    for (int i = 0; i < n; i++) {
        acc += v[i];
        v[i] = -v[i];
    }
    best = 0;
    int ans2 = 0;
    for (int i = 0; i < n; i++) {
        best = max(best+v[i], 0);
        ans2 = max(ans2, best);
    }
    printf("%d\n", max(ans1, acc+ans2));
    return 0;
}



