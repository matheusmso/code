#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, m; //n = zeroes
vector<int> ans;

int main() {
    scanf(" %d %d", &n, &m);
    if (m >= n-1 && m <= 2*n + 2) {
        if (n >= m) {
            ans.push_back(0);
            n--;
        }
        while (n--) {
            ans.push_back(1);
            ans.push_back(0);
            m--;
        }
        for (int i : ans) {
            if (i == 1 && m) {
                printf("1");
                m--;
            }
            printf("%d", i);
        }
        while (m--)
            printf("1");
        printf("\n");
    }
    else printf("-1\n");
    return 0;
}


