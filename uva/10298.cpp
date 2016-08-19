#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e6+7;
char s[N];
int z[N];

int main() {
    while (scanf(" %s", s) && s[0] != '.') {
        int n = strlen(s);
        int j = 0;
        int ans = 1;
        for (int i = 1; i < n; i++) {
            z[i] = 0;
            if (i > j+z[j]-1) {
                j = i;
                while(i+z[i] < n && s[i+z[i]] == s[z[i]])
                    z[i]++;
            }
            else {
                if (z[i-j] <= j+z[j]-1-i) z[i] = z[i-j];
                else {
                    z[i] = j+z[j]-1-i;
                    while (i+z[i] < n && s[i+z[i]] == s[z[i]])
                        z[i]++;
                }
            }
            if (z[i] && n%z[i] == 0 && n/z[i] > ans) {
                bool f = true;
                for (int j = 0; j < n; j++) {
                    if(s[j] != s[j%z[i]]) {
                        f = false;
                        break;
                    }
                }
                if (f)
                    ans = n/z[i];
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

