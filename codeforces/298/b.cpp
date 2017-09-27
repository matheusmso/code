#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int t, sx, sy, ex, ey;
char s[N];

int main() {
    scanf(" %d %d %d %d %d", &t, &sx, &sy, &ex, &ey);
    cin >> s;
    int cnt = 0;
    int lx = ex - sx;
    int ly = ey - sy;
    //printf("%d %d\n", lx, ly);
    for (char c : s) {
        if (lx == 0 && ly == 0) break;
        if (c == 'E' && lx > 0) lx--;
        if (c == 'S' && ly < 0) ly++;
        if (c == 'W' && lx < 0) lx++;
        if (c == 'N' && ly > 0) ly--;
        cnt++;
    }
    if (lx == 0 && ly == 0)
        printf("%d\n", cnt);
    else
        printf("-1\n");
    return 0;
}

    
