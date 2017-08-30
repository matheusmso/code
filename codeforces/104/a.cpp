#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf(" %d", &n);
    if (n <= 10 || n > 21)
        printf("0\n");
    else if (n == 20)
        printf("15\n");
    else
        printf("4\n");
    return 0;
}

