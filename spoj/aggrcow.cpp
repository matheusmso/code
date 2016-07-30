#include <bits/stdc++.h>
using namespace std;

int v[100007], n, c;

bool f(int x) {
    int prev = 0;
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (v[i]-v[prev] >= x) {
            count++;
            prev = i;
        }
    }
    return count+1 >= c;
}

int main() {
    int t;
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d", &n, &c);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        sort(v, v+n);
        int left, right;
        left = 0;
        right = 1000000000;
        while (left+1 < right) {
            int mid = (left+right)/2;
            if (f(mid))
                left = mid;
            else
                right = mid;
        }
        printf("%d\n", left);
    }
    return 0;
}

