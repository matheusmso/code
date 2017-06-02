#include<bits/stdc++.h>
using namespace std;
 
const int N = (int)5e2+7;
int n;
char s[N];
 
int main() {
    int t;
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %s", &n, s);
        int ans = 0;
        bool val = true;
        for (int i = 0; i < n && val; i++) {
            if (s[i] == 'H') ans++;
            else if (s[i] == 'T') ans--;
            if (ans > 1 || ans < 0) val = false;
        }
        printf("%s\n", ans == 0 && val ? "Valid" : "Invalid");
    }
    return 0;
}

