#include <bits/stdc++.h>
using namespace std;

int v[200007];

int main() {
    int n;
    string s;
    scanf("%d", &n);
    cin >> s;
    int m = 2000000000;
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    int i;
    for (i = 0; i < n-1; i++)
        if (s[i] == 'R' && s[i+1] == 'L')
            m = min (v[i+1]-v[i], m);
    if (m == 2000000000)
        printf("-1\n");
    else 
        printf("%d\n", m/2);
    return 0;
}

