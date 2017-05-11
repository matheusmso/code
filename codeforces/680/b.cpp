#include <bits/stdc++.h>
using namespace std;

int n, a;
int city[107];

int main() {
    scanf("%d%d", &n, &a);
    for (int i = 1; i <= n; i++)
        scanf("%d", city+i);
    int dist;
    int count = 0;
    for (dist = 0; dist < n; dist++)  {
        if (a+dist <= n && a-dist >= 1) {
            if (city[a+dist] == 1 && city[a-dist] == 1) {
                count++;
                if (dist != 0)
                    count++;
            }
        }
        else if (a+dist > n && a-dist >= 1) {
            if (city[a-dist] == 1)
                count++;
        }
        else if (a-dist < 1 && a+dist <= n) {
            if (city[a+dist] == 1)
                count++;
        }
        //printf("%d-%d\n", dist, count);
    }
    printf("%d\n", count);
    return 0;
}

