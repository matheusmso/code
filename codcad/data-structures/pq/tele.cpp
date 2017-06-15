#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, l, t, v[N];

int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    scanf(" %d %d", &n, &l);
    for (int i = 1; i <= n; i++)
        pq.push(make_pair(0, i));
    for (int i = 0; i < l; i++) {
        scanf(" %d", &t);
        pair<int, int> p = pq.top();
        pq.pop();
        v[p.second]++;
        p.first += t;
        pq.push(p);
    }
    for (int i = 1; i <= n; i++)
        printf("%d %d\n", i, v[i]);
    return 0;
}


