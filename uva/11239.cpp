#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
char s[N];
string tpc;
map<string, set<string>> m;

int main() {
    while (scanf(" %[^\n]", s) && s[0] != '0') {
        if (s[0] == '1') {
            vector<pair<int, string>> v;
            for (pair<string, set<string>> p : m) {
                if (isupper(p.first[0])) {
                    int aux = 0;
                    for (string t : p.second) {
                        if (m[t].size() == 1)
                            aux++;
                    }
                    v.push_back({-aux, p.first});
                }
            }
            sort(v.begin(), v.end());
            for (pair<int, string> p : v)
                cout << p.second << " " << -p.first << endl;
            m.clear();
            continue;
        }
        int l = strlen(s);
        string t(s, l);
        if (isupper(t[0])) {
            tpc = t;
            m[tpc];
        }
        else {
            m[tpc].insert(t);
            m[t].insert(tpc);
        }
    }
    return 0;
}


