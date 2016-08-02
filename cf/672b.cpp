#include <bits/stdc++.h>
using namespace std;

char s[100007];
int n;
map<char, int> m;

int main() {
    scanf(" %d", &n);
    scanf(" %s", &s);
    int ans = 0;
    if (n > 26) {
        printf("-1\n");
        return 0;
    }
    else {
        for (int i = 0; i < n; i++)
            m[s[i]]++;
        for (auto i : m)
            ans += i.second;
    }
    printf("%d\n", ans-m.size());
    return 0;
}
