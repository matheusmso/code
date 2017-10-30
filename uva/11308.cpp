#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int t, m, n, b;
char s[N];

int main() {
    scanf(" %d", &t);
    for (int te = 0; te < t; te++) {
        scanf(" %[^\n]", s);
        for (int i = 0; s[i]; i++)
            s[i] = toupper(s[i]);
        printf("%s\n", s);
        map<string, int> mp;
        vector<pair<int, string>> v;
        scanf(" %d %d %d", &m, &n, &b);
        for (int i = 0; i < m; i++) {
            int x;
            scanf(" %s %d", s, &x);
            string ss(s, strlen(s));
            mp[ss] = x;
        }
        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]", s);
            string ss(s, strlen(s));
            int aux = 0;
            int x;
            scanf(" %d", &x);
            for (int j = 0; j < x; j++) {
                int xx;
                scanf(" %s %d", s, &xx);
                string st(s, strlen(s));
                aux += mp[st]*xx;
            }
            v.push_back({aux, ss});
        }
        sort(v.begin(), v.end());
        if (v[0].first > b)
            printf("Too expensive!\n");
        for (int i = 0; i < v.size(); i++) {
            if (v[i].first > b) break;
            printf("%s\n", v[i].second.c_str());
        }
        printf("\n");
    }
    return 0;
}


