#include <bits/stdc++.h>
using namespace std;

int a[6], b[6];
map<int, int> m;

int main() {
    for (int i = 0; i < 6; i++)
        scanf(" %d", a+i);
    for (int i = 0; i < 6; i++)
        scanf(" %d", b+i);
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            m[a[i]+b[j]]++;
    pair<int, int> ans;
    for (pair<int, int> p : m) 
        if (p.second > ans.second)
            ans = p;
    printf("%d\n", ans.first);
    return 0;
}


