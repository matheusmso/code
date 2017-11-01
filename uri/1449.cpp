#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char s1[N], s2[N];
int t, m, n;

int main() {
    scanf(" %d", &t);
    for (int tt = 0; tt < t; tt++) {
        map<string, string> mp;
        scanf(" %d %d", &m, &n);
        for (int i = 0; i < m; i++) {
            scanf(" %[^\n]", s1);
            scanf(" %[^\n]", s2);
            mp[string(s1, strlen(s1))] = string(s2, strlen(s2));
        }
        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]", s1);
            char *p = strtok(s1, " ");
            while (p != NULL) {
                string ss(p, strlen(p));
                p = strtok(NULL, " ");
                if (mp.find(ss) != mp.end()) 
                    printf("%s%c", mp[ss].c_str(), " \n"[p == NULL]);
                else
                    printf("%s%c", ss.c_str(), " \n"[p == NULL]);
            }
        }
        printf("\n");
    }
    return 0;
}

