#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main() {
    scanf("%d%d", &n, &k);
    cin >> s;
    int a, b, ans = 0, j = 0;
    for (int i = 0; i+ans-1 < n; i++) {
        a = b = 0;
        while (j < n) {
            if (s[j] == 'a') a++;
            else b++;
            if (min (a,b) > k) {
                if(s[i] == 'a') a--;
                else b--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
    }
    printf("%d\n", ans);
    return 0;
}


