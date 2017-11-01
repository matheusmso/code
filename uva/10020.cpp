#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int m, te;

int main() {
    scanf(" %d", &te);
    for (int tt = 0; tt < te; tt++) {
        scanf(" %d", &m);
        vector<pair<int, int>> v;
        int x, y;
        while (scanf(" %d %d", &x, &y)) {
            if (x == 0 && y == 0) break;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        int aux = -INF, id;
        int l = 0;
        vector<int> p;
        for (int i = 0; i < v.size(); ) {
            while (i < v.size() && v[i].first <= l) {
                if (v[i].second > aux) {
                    aux = v[i].second;
                    id = i;
                }
                i++;
            }
            if (i < v.size() && v[i].first > l) {
                if (aux == l) {
                    p.clear();
                    break;
                }
            }
            if (aux >= l) {
                l = aux;
                p.push_back(id);
                if (aux >= m)
                    break;
                if (i == v.size() && aux < m)
                    p.clear();
            }
            else {
                p.clear();
                break;
            }
        }
        printf("%d\n", p.size());
        for (int i : p)
            printf("%d %d\n", v[i].first, v[i].second);
        printf("\n");
    }
    return 0;
}


