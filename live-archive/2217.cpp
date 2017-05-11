#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6+7;
int v[N];
int n, k;

int main() {
    while (scanf(" %d %d", &n, &k) != EOF) {
        map<int, int> mapa;
        for (int i = 0; i < n; i++) {
            char c;
            scanf(" %c", &c);
            v[i] = c == '*' ? 100000 : c-'0';
        }
        int l, sum;
        l = sum = 0;
        for (int i = 0; i < k; i++)
            sum += v[i];
        mapa[sum] = 0;
        for (int i = k; i < n; i++) {
            sum += v[i]-v[l];
            ++l;
            if(!mapa.count(sum))
                mapa[sum] = l;
        }
        if (k > n || mapa.begin()->first >= 100000)
            printf("0\n");
        else
            printf("%d\n", 1+mapa.begin()->second);
    }
    return 0;
}
