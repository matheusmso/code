#include <bits/stdc++.h>
using namespace std;

int n;
int color[50];
bool cycle = false;
stack<int> sta;
vector<int> graph[50];

void dfs(int v) {
    if (color[v] == 2)
        return;
    if (color[v] == 1) {
        cycle = true;
        return;
    }
    color[v] = 1;
    for (int i = 0; i < graph[v].size(); i++) {
        int k = graph[v][i];
        dfs(k);
    }
    color[v] = 2;
    sta.push(v);
}

int main() {
    int test = 1;
    while (scanf("%d", &n) && n != 0) {
        string names[50];
        string s;
        int k;
        map<string,int> m;
        for (int i = 0; i < n; i++) {
            cin >> s;
            m[s] = i;
            names[i] = s;
        }
        for (int i = 0; i < n; i++) {
            cin >> s;
            scanf("%d", &k);
            string l;
            for (int j = 0; j < k; j++) {
                cin >> l;
                graph[m[l]].push_back(m[s]);
            }
        }
        cout << "Teste " << test++ << endl;
        for (int i = 0; i < n; i++)
            if (color[i] == 0)
                dfs(i);
        if (!cycle) {
            while (!sta.empty()) {
                cout << names[sta.top()] << " ";
                sta.pop();
            }
        }
        else
            cout << "impossivel";
        cout << endl << endl;
        while (!sta.empty())
            sta.pop();
        memset(color,0,sizeof(color));
        cycle = false;
        for (auto& v : graph)
            v.clear();
    }
    return 0;
}

