#include <bits/stdc++.h>
using namespace std;

const int N = 107;
int n, k;
int cn[N];
char c;

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &c);
        cn[c-'a']++;
        if (cn[c-'a'] > k) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}


