#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, l, c;
char s[N];

int main() {
    while (scanf(" %d %d %d", &n, &l, &c) != EOF) {
        vector<int> v;
        for (int i = 0; i < n; i++) {
            scanf(" %s", s);
            v.push_back(strlen(s) + 1);
        }
        int ans = 0;
        int cur = 0;
        for (int i = 0; i < n; ) {
            while (cur + v[i] <=  c+1) {
                cur += v[i];
                i++;
            }
            ans++;
            cur = 0;
        }
        printf("%d\n", (ans+l-1)/l);
    }
    return 0;
}


