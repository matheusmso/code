#include <bits/stdc++.h>
using namespace std;

int n, t; 
double v[17][17];

int main() {
    scanf("%d %d", &n, &t);
    for (int time = 0; time < t; time++) {
        v[1][1] += 1; 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i+1; j++) {
                double dif = v[i][j]-1;
                if (dif > 1e-7) {
                    v[i][j] -= dif;
                    v[i+1][j] += dif/2;
                    v[i+1][j+1] += dif/2;
                }
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (v[i][j]-1 < 1e-7 && v[i][j]-1 > -1e-7)
                count++;
    printf("%d\n", count);
    return 0;
}


