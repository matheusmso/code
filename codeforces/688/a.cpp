#include <bits/stdc++.h>
using namespace std;

int n, d;
int ans[107];

int main() {
    scanf("%d %d", &n, &d);
    for (int i = 0; i < d; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '0') {
                ans[i] = 1;
                break;
            }
        }
    }
    int m = ans[0];
    for (int i = 1; i < d; i++) {
        if (ans[i] != 0)
            ans[i] += ans[i-1];
        m = max(m, ans[i]);
    }
    cout << m << endl;
    return 0;
}



