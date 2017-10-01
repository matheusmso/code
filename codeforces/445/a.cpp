#include <bits/stdc++.h>
using namespace std;

int n, m;
char g[107][107];
char c[] = {'B', 'W'};

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf(" %c", &g[i][j]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '.') {
                int k = i*m+j;
                if (m%2 == 0)
                    k += i%2;
                g[i][j] = c[k%2];
            }
            printf("%c", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}

    
                
