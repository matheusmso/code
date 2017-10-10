#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+7;
int n;
vector<int> ans;

int main() {
    scanf(" %d", &n);
    int sa, sb;
    sa = sb = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        if (abs(sa+a-sb) <= 500 && abs(sb+b-sa) <= 500) {
            if (a < b) {
                sa += a;
                ans.push_back('A');
            }
            else {
                sb += b;
                ans.push_back('G');
            }
        }
        else if (abs(sa+a-sb) <= 500) {
            sa += a;
            ans.push_back('A');
        }
        else {
            sb += b;
            ans.push_back('G');
        }
    }
    if (abs(sa-sb) <= 500) {
        for (char c : ans)
            printf("%c", c);
        printf("\n");
    }
    else printf("-1\n");
    return 0;
}

