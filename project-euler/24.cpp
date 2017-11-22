#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    for (int i = 0; i < 1e6-1; i++)
        next_permutation(v.begin(), v.end());
    for (int i = 0; i < 10; i++)
        printf("%d", v[i]);
    printf("\n");
    return 0;
}


