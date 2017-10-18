#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int v[N], n;

int main() {
    scanf(" %d", &n);
    int ans = 0;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        if (st.empty() || x > st.top())
            st.push(x);
        else {
            while (!st.empty() && x < st.top()) {
                st.pop();
                ans++;
            }
            if (!st.empty() && x == st.top()) continue;
            st.push(x);
        }
    }
    while (!st.empty()) {
        st.pop();
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}


