#include <bits/stdc++.h>
using namespace std;

int n[2], v[2][3], d[3];

void end() {
    printf("-1\n");
    exit(0);
}

int main() {
    scanf(" %d %d", &n[0], &n[1]);
    int ans = 0;
    for (int i = 0; i < 2; i++) {
        while (n[i]%2 == 0) {
            n[i] /= 2;
            v[i][0]++;
        }
        while (n[i]%3 == 0) {
            n[i] /= 3;
            v[i][1]++;
        }
        while (n[i]%5 == 0) {
            n[i] /= 5;
            v[i][2]++;
        }
    }
    if (n[0] != n[1]) end();
    for (int i = 0; i < 3; i++)
        d[i] = min(v[0][i], v[1][i]);
    for (int i = 0; i < 3; i++) {
        v[0][i] -= d[i];
        v[1][i] -= d[i];
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            ans += v[i][j];
    printf("%d\n", ans);
    return 0;
}
