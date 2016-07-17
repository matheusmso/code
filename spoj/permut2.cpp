#include <bits/stdc++.h>
using namespace std;

int v[100007];

int main() {
    int n;
    while (scanf(" %d" , &n) && n != 0) {
        for (int i = 1; i <= n; i++)
            scanf(" %d", &v[i]);
        bool amb = true;
        for (int i = 1; i <= n; i++)
            if (v[v[i]] != i) {
                amb = false;
                break;
            }
        if (amb)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
    }
    return 0;
}

