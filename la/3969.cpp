#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
int v[55], b[4], a[4];

lint fexp(lint b, lint e, lint m) {
    b %= m;
    if (e == 0) return 1;
    return ((e&1) ? b : 1)*fexp(b*b, e/2, m)%m;
}

int phi(int x) {
    int ans = x;
    for (int i = 2; i*i <= x; i++) {
        if (x%i == 0) 
            ans -= ans/i;
        while (x%i == 0) 
            x /= i;
    }
    if (x > 1) 
        ans -= ans/x;
    return ans;
}

int main() {
    int n, m, t;
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &n);
        m = 1;
        vector<char> ans;
        for (int i = 0; i < 4; i++) {
            scanf(" %d", &b[i]);
            m *= b[i];
        }
        for (int i = 0; i < n; i++)
            scanf(" %d", &v[i]);
        for (int z = 0; z < n; z++) {
            for (int i = 3; i >= 0; i--) {
                a[i] = v[z]%100;
                v[z] /= 100;
            }
            int x = 0;
            for (int i = 0; i < 4; i++) {
                x += (m/b[i]*a[i]*fexp(m/b[i], phi(b[i])-1, b[i]))%m;
                x %= m;
            }
            int s[3];
            for (int i = 2; i >= 0; i--) {
                s[i] = x%100;
                x /= 100;
            }
            for (int i = 0; i < 3; i++)
                ans.push_back((s[i] >= 27) ? ' ' : char(s[i]+'A'-1));
        }
        while (ans.back() == ' ') ans.pop_back();
        for (int i = 0; i < ans.size(); i++)
            printf("%c", ans[i]);
        printf("\n");
    }
    return 0;
}
