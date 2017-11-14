#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, t;

bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.first < b.first) return true;
    if (a.first > b.first) return false;
    for (int i = 0; i < min(a.second.size(), b.second.size()); i++) {
        if(a.second[i] > b.second[i])
            return true;
        if(a.second[i] < b.second[i])
            return false;
    }
    return a.second.size() > b.second.size();
}

int main() {
    while (scanf(" %d", &n) != EOF) {
        vector<pair<int, string>> v;
        for (int i = 0; i < n; i++) {
            char s[25];
            int x;
            scanf(" %s %d", s, &x);
            v.push_back({x, string(s, strlen(s))});
        }
        sort(v.begin(), v.end(), cmp);
        printf("Instancia %d\n", ++t);
        printf("%s\n\n", v[0].second.c_str());
    }
    return 0;
}


