#include <bits/stdc++.h>

using namespace std;

int w[1007];
int a[1007];
double h[1007];
int aux[1007];
string s[1007];


bool c(int x, int y) {
    if (w[x] > w[y])
        return true;
    if (w[x] < w[y])
        return false;
    if (a[x] < a[y])
        return true;
    if (a[x] > a[y])
        return false;
    if (h[x] < h[y])
        return true;
    if (h[x] > h[y])
        return false;
    if (s[x].compare(s[y]) < 0)
        return true;
    return false;
}


int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        for (int j = 0; j < n; j++) {
            char l[100];
            string sa;
            scanf(" %s", l);
            sa = l;
            s[j] = sa;
            scanf("%d %d %lf", &w[j], &a[j], &h[j]);
        }
        for (int j = 0; j < n; j++)
            aux[j] = j;
        sort(aux, aux + n, c);
        printf("CENARIO {%d}\n", i+1);
        for (int j = 0; j < m; j++) 
            printf("%d - %s\n", j+1, s[aux[j]].c_str());
        for (int j = 0; j < 1007; j++) {
            w[j] = a[j] = h[j] = 0;
        }
    }
    return 0;
}


