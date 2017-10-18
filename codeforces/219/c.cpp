#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e5+7;
char s[N];
int n, k;

void solve(int a, int b) {
    if ((b-a)%2 == 1) {
        int l = s[a]-'A';
        l = (l+1)%k;
        for (int i = a+1;  i < b; i += 2)
            s[i] = l+'A';
    }
    else {
        int l = s[a]-'A';
        l = (l+1)%k;
        if (b != n)
            if (l+'A' == s[b])
                l = (l+1)%k;
        for (int i = a+1; i < b; i+= 2)
            s[i] = 'A'+l;
    }
}

int main() {
    scanf(" %d %d %s", &n, &k, s);
    int ans = 0;
    if (k == 2) {
        int cur = 0;
        for (int i = 0; i < n; i++)
            if (s[i] != 'A' + (i%2))
                cur++;
        ans = cur;
        cur = 0;
        for (int i = 0; i < n; i++)
            if (s[i] != 'A' + 1 - (i%2))
                cur++;
        if (cur < ans) {
            ans = cur;
            for (int i = 0; i < n; i++)
                s[i] = 'A' + 1 - (i%2);
        }
        else
            for (int i = 0; i < n; i++)
                s[i] = 'A' + (i%2);
    }
    else {
        for (int i = 0, j = 1; i < n; i = j) {
            while (j < n && s[j] == s[i]) j++;
            solve(i, j);
            ans += (j-i)/2;
        }
    }
    printf("%d\n%s\n", ans, s);
    return 0;
}


