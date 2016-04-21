#include <bits/stdc++.h>

using namespace std;
#define maxt 1000100
#define maxn 1010
#define maxc 20
#define maxf 20000

int c, n, in[maxn], t[maxn], f[maxc];
int prox = 1, sol;
int main() {
    queue<int> q;
    scanf("%d %d", &c ,&n);
    for (int i = 0; i < n; i++) 
        scanf("%d %d", &in[i+1], &t[i+1]);
    for (int min = 0; min < maxf; min++) {
        while (prox <= n && in[prox] == min)
            q.push(prox++);
        bool spot = true;
        while (q.size() > 0 && spot) {
            spot = false;
            for (int i = 0; i < c; i++) 
                if (f[i+1] <= min) {
                    if (min - in[q.front()] > 20)
                        sol++;
                    f[i+1] = min + t[q.front()];
                    q.pop();
                    spot = true;
                    break;
                }
        }
        if (q.size() == 0 && prox > n)
            break;
    }
    printf("%d\n", sol);
    return 0;
}


