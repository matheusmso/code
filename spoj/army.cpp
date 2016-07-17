#include <bits/stdc++.h>
using namespace std;

int n, ng, nm;

int main() {
    scanf(" %d", &n);
    for (int k = 0; k < n; k++) {
        int mng = 0, mnm = 0;
        scanf(" %d %d", &ng, &nm);
        for (int i = 0; i < ng; i++) {
            int x;
            scanf(" %d", &x);
            mng = max(mng, x);
        }
        for (int i = 0; i < nm; i++) {
            int x;
            scanf( "%d", &x);
            mnm = max(mnm, x);
        }
        if (mng >= mnm)
            printf("Godzilla\n");
        else 
            printf("MechaGodzilla\n");
    }
    return 0;
}

