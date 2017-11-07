#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int n, v[N], p[N], s[N];

int main() {
    while (scanf(" %d", &n) != EOF) {
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        set<int> st;
        for (int i = 0; i < n; i++) {
            set<int>::iterator it = lower_bound(st.begin(), st.end(), v[i]);
            if (it != st.end())
                st.erase(it);
            st.insert(v[i]);
            p[i] = st.size();
        }
        st.clear();
        for (int i = n-1; i >= 0; i--) {
            set<int>::iterator it = lower_bound(st.begin(), st.end(), v[i]);
            if (it != st.end())
                st.erase(it);
            st.insert(v[i]);
            s[i] = st.size();
        }
        int ans = -INF;
        for (int i = 0; i < n; i++)
            ans = max(ans, min(p[i], s[i])*2-1);
        printf("%d\n", ans);
    }
    return 0;
}


