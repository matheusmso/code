#include <bits/stdc++.h>

using namespace std;

int p[150];
int b[150];
int br[150];
int total;

bool c(int x, int y) {
    if (p[x] > p[y]) return true;
    if (p[x] < p[y]) return false;
    if (br[x] != 0) {
        if (br[y] != 0) {
            if (1.0*(b[x])/br[x] > 1.0*(b[y])/br[y])
                return true;
            if (1.0*(b[x])/br[x] < 1.0*(b[y])/br[y])
                return false;
        }
        else {
            if (1.0*(b[x])/br[x] > 1.0*(b[y])/total)
                return true;
            if (1.0*(b[x])/br[x] < 1.0*(b[y])/total)
                return false;
        }
    }
    if (br[x] == 0) {
        if (br[y] != 0) {
            if (1.0*(b[x])/total > 1.0*(b[y])/br[y])
                return true;
            if (1.0*(b[x])/total < 1.0*(b[y])/br[y])
                return false;
        }
        if (br[y] == 0) {
            if (1.0*(b[x])/total > 1.0*(b[y])/total) 
                return true;
            if (1.0*(b[x])/total < 1.0*(b[y])/total)
                return false;
        }
    }
    if (b[x] > b[y]) return true;
    if (b[x] < b[y]) return false;
    if (br[x] < br[y]) return true;
    return false;
}




int main() {
    int a;
    int h = 1;
    bool line = false;
    while (scanf("%d", &a) == 1) {
        if (a == 0)
            return 0;
        if (line)
            printf("\n");
        line = true;
        int x, y, z, w;
        total = a * (a - 1) / 2;
        for (int i = 0; i < total; i ++) {
            scanf("%d %d %d %d", &x, &y, &z, &w);
            if (y > w) {
                p[x] += 2;
                p[z]++;
            }
            else {
                p[x]++;
                p[z] += 2;
            }
            b[x] += y;
            b[z] += w;
            br[x] += w;
            br[z] += y;
        }
        int v[a + 1];
        for (int i = 1; i < a + 1; i++) {
            v[i] = i;
        }
        sort(v+1, v+a+1, c);
        printf("Instancia %d\n", h++);
        for (int i = 0; i < a; i++)
            printf("%d%c", v[i+1], i == a - 1 ? '\n' : ' ');
        for (int i = 0; i < 150; i++) {
            p[i] = 0;
            b[i] = 0;
            br[i] = 0;
        }
    }
    return 0;
}



