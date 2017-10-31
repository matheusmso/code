#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;;
int c, s, te, o[N], fr[N];
pair<int, int> v[N];

int main() {
    while (scanf(" %d %d", &c, &s) != EOF) {
        int sum = 0;
        int ls[17];
        memset(ls, 0, sizeof(ls));
        for (int i = 0; i < s; i++) {
            int x;
            scanf(" %d", &x);
            sum += x;
            v[i] = {x, i};
            o[i] = x;
        }
        sort(v, v+s);
        vector<int> aux[17];
        int p = s-1;
        for (int i = 0; i < c && p >= 0; i++)
            aux[i].push_back(v[p--].second);
        for (int i = c-1; i >= 0 && p >= 0; i--)
            aux[i].push_back(v[p--].second);
        for (int i = 0; i < c; i++)
            if (aux[i].size() == 2)
                if (aux[i][0] > aux[i][1])
                    swap(aux[i][0], aux[i][1]);
        memset(fr, 0, sizeof(fr));
        vector<int> ans[17];
        p = 0;
        for (int i = 0; i < s; i++) {
            if (fr[i]) continue;
            for (int j = 0; j < c; j++) {
                if (aux[j].size() && aux[j][0] == i) {
                    ans[p].push_back(o[i]);
                    fr[i] = 1;
                    if (aux[j].size() == 2) {
                        ans[p].push_back(o[aux[j][1]]);
                        fr[aux[j][1]] = 1;
                    }
                    p++;
                    break;
                }
            }
        }
        printf("Set #%d\n", ++te);
        for (int i = 0; i < c; i++) {
            printf(" %d:", i);
            for (int j : ans[i]) {
                printf(" %d", j);
                ls[i] += j;
            }
            printf("\n");
        }
        double im = 0.0;
        for (int i = 0; i < c; i++)
            im += (double)fabs(ls[i]-sum/(1.0*c));
        printf("IMBALANCE = %.5lf", im);
        printf("\n\n");
    }
    return 0;
}


