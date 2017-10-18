#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n;
vector<pair<int, int>> q;
vector<int> adj[N];

int seen[N];

void dfs(int a) {
    seen[a] = 1;
    for (int k : adj[a])
        if (seen[k] == 0)
            dfs(k);
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y, z;
        scanf(" %d %d %d", &x, &y, &z);
        if (x == 1) {
            int c = q.size();
            for (int j = 0; j < q.size(); j++) {
                if ((y > q[j].first && q[j].second > y) || 
                        (z > q[j].first && q[j].second > z))
                    adj[c].push_back(j);
                if ((q[j].first > y && z > q[j].first) ||
                        (q[j].second > y && z > q[j].second))
                    adj[j].push_back(c);
            }
            q.push_back({y, z});
        }
        else {
            memset(seen, 0, sizeof(seen));
            dfs(y-1);
            printf("%s\n", seen[z-1] ? "YES" : "NO");
        }
    }
    return 0;
}


