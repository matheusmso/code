#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char a[N], b[N];

int main() {
    while (scanf(" %s %s", a, b)) {
        int n = strlen(a);
        int m = strlen(b);
        vector<char> c;
        int carry = 0;
        int x, y;
        if (a[0] == '0' && n == 1 && b[0] == '0' && m == 1) break;
        if (n < m) {
            for (int i = 0; i <= n; i++)
                a[m-i] = a[n-i];
            for (int i = 0; i < m-n; i++)
                a[i] = '0';
            n = m;
        }
        else if (m < n) {
            for (int i = 0; i <= m; i++)
                b[n-i] = b[m-i];
            for (int i = 0; i < n-m; i++)
                b[i] = '0';
            m = n;
        }
        for (int i = n-1, j = m-1; ; i--, j--) {
            if (i == -1 && j == -1) break;
            else {
                if (isdigit(a[i]))
                    x = a[i]-'0';
                else
                    x = a[i]-'A'+10;
                if (isdigit(b[j]))
                    y = b[j]-'0';
                else
                    y = b[j]-'A'+10;
                int z = x + y + carry;
                carry = z/36;
                z %= 36;
                if (z < 10)
                    c.push_back('0'+z);
                else
                    c.push_back('A'+z-10);
            }
        }
        if (carry) {
            if (carry < 10)
                c.push_back('0'+carry);
            else
                c.push_back('A'+carry-10);
        }
        reverse(c.begin(), c.end());
        for (char i : c)
            printf("%c", i);
        printf("\n");
    }
    return 0;
}


