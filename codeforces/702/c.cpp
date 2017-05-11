#include <bits/stdc++.h>
using namespace std;

int tower[100007], city[100007];
int n, m;

bool f(long long x) {
    int count = 0;
    int j = 0;
    for (int i = 0; i < n && j < m; ) {
        if (abs(city[i]-tower[j]) <= x) {
            count++;
            i++;
        }
        else
            j++;
    }
    return count == n;
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf(" %d", &city[i]);
    for (int i = 0; i < m; i++)
        scanf(" %d", &tower[i]);
    long long left, right, mid;
    left = 0;
    right = 2000000000ll;
    while (left < right) {
        mid = (left+right)/2;
        if (f(mid))
            right = mid;
        else 
            left = mid+1;
    }
    printf("%lld\n", left);
    return 0;
}

