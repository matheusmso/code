#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e4+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    printf("%d\n", v[n/2]);
    return 0;
}


