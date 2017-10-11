#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int y, k, n;
vector<int> ans;

int main() {
    scanf(" %d %d %d", &y, &k, &n);
    for (int i = (((k-y)%k)+k)%k; i + y <= n; i+= k)
        if (i)
            ans.push_back(i);
    if (ans.size() == 0)
        printf("-1\n");
    else {
        for (int k : ans)
            printf("%d ", k);
    }
    return 0;
}


