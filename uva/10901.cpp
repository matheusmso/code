#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int c, n, t, m, tout[N];

int main() {
    scanf(" %d", &c);
    for (int j = 0; j < c; j++) {
        scanf(" %d %d %d", &n, &t, &m);
        queue<pair<int, int>> q[2];
        int k;
        int op;
        for (int i = 0; i < m; i++) {
            int x;
            char s[10];
            scanf(" %d %s", &x, s);
            if (i == 0) {
                k = x;
                op = s[0] == 'r';
            }
            if (s[0] == 'l')
                q[0].push({x, i});
            else
                q[1].push({x, i});
        }
        if (op) k += t;
        vector<int> cap;
        while (!q[0].empty() || !q[1].empty()) {
            for (int i = 0; i < cap.size(); i++)
                tout[cap[i]] = k;
            cap.clear();
            while (cap.size() < n && !q[op].empty() && q[op].front().first <= k) {
                cap.push_back(q[op].front().second);;
                q[op].pop();
            }
            if (cap.size())
                k += t;
            else {
                int aux = INF;
                if (q[0].empty() && q[1].empty()) break;
                if (!q[op].empty())
                    aux = q[op].front().first;
                if (!q[1-op].empty()) {
                    if (q[1-op].front().first < aux) {
                        k = max(k, q[1-op].front().first) + t;
                    }
                    else {
                        k = max(k, q[op].front().first);
                        op = 1-op;
                    }
                }
                else {
                    k = max(k, q[op].front().first);
                    op = 1-op;
                }
            }
            op = 1-op;
        }
        if (cap.size())
            for (int i = 0; i < cap.size(); i++)
                tout[cap[i]] = k;
        for (int i = 0; i < m; i++)
            printf("%d\n", tout[i]);
        if (j != c-1)
            printf("\n");
    }
    return 0;
}


