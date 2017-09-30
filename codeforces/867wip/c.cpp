#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e5+7;
lint n, S, a[N], b[N], s[N];

int main() {
    scanf(" %lld %lld", &n, &S);
    lint sum = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %lld %lld %lld", s+i, a+i, b+i);
        sum += s[i];
    }
    priority_queue<pair<pair<lint, lint>, int>> pq;
    for (int i = 0; i < n; i++) {
        if (abs(a[i]-b[i]) != 0)
            pq.push({{abs(a[i]-b[i]), s[i]}, i});
    }
    lint pizzas = sum/S + (sum%S != 0);
    lint ans = 0;
    lint t1, t2;
    t1 = t2 = 0;
    while (!pq.empty()) {
        pair<pair<lint, lint>, int> p = pq.top();
        pq.pop();
        int id = p.second;
        //printf("%lld %lld %lld %d\n", t1, t2, pizzas, id);
        if (a[id] > b[id]) {
            if (s[id] <= t1) {
                t1 -= s[id];
                ans += s[id]*a[id];
            }
            else {
                ans += t1*a[id];
                s[id] -= t1;
                t1 = 0;
                lint need = s[id]/S + (s[id]%S != 0);
                //printf("aneed = %lld\n", need);
                if (need > pizzas) {
                    ans += pizzas*S*a[id];
                    s[id] -= pizzas*S;
                    ans += s[id]*b[id];
                    t2 -= s[id];
                    pizzas = 0;
                }
                else {
                    pizzas -= need;
                    t1 += need*S;
                    ans += s[id]*a[id];
                    t1 -= s[id];
                }
            }
        }
        else {
            if (s[id] <= t2) {
                t2 -= s[id];
                ans += s[id]*b[id];
            }
            else {
                ans += t2*b[id];
                s[id] -= t2;
                t2 = 0;
                lint need = s[id]/S + (s[id]%S != 0);
                //printf("bneed = %lld\n", need);
                if (need > pizzas) {
                    ans += pizzas*S*b[id];
                    s[id] -= pizzas*S;
                    ans += s[id]*a[id];
                    t1 -= s[id];
                    pizzas = 0;
                }
                else {
                    pizzas -= need;
                    t2 += need*S;
                    ans += s[id]*b[id];
                    t2 -= s[id];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (abs(a[i]-b[i]) == 0) {
            ans += s[i]*a[i];
        }
    printf("%lld\n", ans);
    return 0;
}

