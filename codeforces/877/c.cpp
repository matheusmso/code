#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;
vector<int> ans;

int main() {
    scanf(" %d", &n);
    for (int i = 2; i <= n; i += 2)
        ans.push_back(i);
    for (int i = 1; i <= n; i += 2)
        ans.push_back(i);
    for (int i = 2; i <= n; i += 2)
        ans.push_back(i);
    printf("%d\n", (int)ans.size());
    for (int i : ans)
        printf("%d ", i);
    printf("\n");
    return 0;
}


