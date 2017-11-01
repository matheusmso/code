#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, m;
char s[27];

int main() {
    while (scanf(" %d %d", &n, &m) && n) {
        vector<set<string>> v;
        for (int i = 0; i < n; i++) {
            int x;
            scanf(" %d", &x);
            set<string> st;
            for (int j = 0; j < x; j++) {
                scanf(" %s", s);
                string ss(s, strlen(s));
                st.insert(ss);
            }
            v.push_back(st);
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            int x;
            vector<string> vv;
            scanf(" %d", &x);
            for (int j = 0; j < x; j++) {
                scanf(" %s", s);
                string ss(s, strlen(s));
                vv.push_back(ss);
            }
            for (set<string> st : v)
                for(string ss : vv)
                    if (st.find(ss) != st.end()) {
                        ans++;
                        break;
                    }
        }
        printf("%d\n", ans);
    }
    return 0;
}


