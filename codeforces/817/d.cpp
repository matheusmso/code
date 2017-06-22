#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int)1e6+7;
int n; 
lint v[N], l[N], r[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %lld", v+i);
    stack<lint> s;
    lint ans = 0;
    //max
    for (int i = 0; i < n; i++) {
        while (!s.empty() && v[i] > v[s.top()]) {
            lint t = s.top();
            s.pop();
            r[t] = i-1;
        }
        if (s.empty()) l[i] = 0;
        else l[i] = s.top()+1;
        s.push(i);
    }
    while (!s.empty()) {
        lint t = s.top();
        s.pop();
        r[t] = n-1;
    }
    for (int i = 0; i < n; i++)
        ans += v[i]*(i-l[i]+1)*(r[i]-i+1);
    //min
    for (int i = 0; i < n; i++) {
        while (!s.empty() && v[i] < v[s.top()]) {
            lint t = s.top();
            s.pop();
            r[t] = i-1;
        }
        if (s.empty()) l[i] = 0;
        else l[i] = s.top()+1;
        s.push(i);
    }
    while (!s.empty()) {
        lint t = s.top();
        s.pop();
        r[t] = n-1;
    }
    for (int i = 0; i < n; i++)
        ans -= v[i]*(i-l[i]+1)*(r[i]-i+1);
    printf("%lld\n", ans);
    return 0;
}


