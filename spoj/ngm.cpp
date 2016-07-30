#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf(" %d", &n);
    if (!(n%10))
        printf("2\n");
    else 
        printf("1\n%d\n", n%10);
    return 0;
}
