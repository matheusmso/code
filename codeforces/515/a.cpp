#include <bits/stdc++.h>
using namespace std;

int a, b, s;

int main() {
    scanf(" %d %d %d", &a, &b, &s);
    int dist = abs(a) + abs(b);
    if (s >= dist && (s-dist)%2 == 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

