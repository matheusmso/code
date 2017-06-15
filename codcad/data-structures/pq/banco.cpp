#include <bits/stdc++.h>
using namespace std;

int c, n, t, d;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    scanf(" %d %d", &c, &n);
    for (int i = 0; i < c; i++)
        pq.push(0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %d %d", &t, &d);
        int x = pq.top();
        pq.pop();
        if (x - t > 20) ans++;
        pq.push(max(x, t)+d);
    }
    printf("%d\n", ans);
    return 0;
}

