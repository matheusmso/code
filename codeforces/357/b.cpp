#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, m, v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x[3];
        bool can[] = {true, true, true};
        int need = 0;
        for (int i = 0; i < 3; i++) {
            scanf(" %d", x+i);
            if (v[x[i]])
                can[v[x[i]]-1] = false;
        }
        vector<int> aux;
        for (int i = 0; i < 3; i++)
            if (can[i])
                aux.push_back(i+1);
        for (int i = 0, j = 0; i < 3; i++)
            if (v[x[i]] == 0)
                v[x[i]] = aux[j++];
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}

                
                
        
