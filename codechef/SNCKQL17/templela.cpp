#include<bits/stdc++.h>
using namespace std;
 
const int N = (int)1e2+7;
 
int n, v[N];
 
int main() {
    int t;
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &n);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        bool val = true;
        if (n%2 == 0) val = false;
        for (int i = 0; i < (n+1)/2; i++) {
            if (v[i] != v[n-i-1]) val = false;
            else if (v[i] != i+1) val = false;
        }
        printf("%s\n", val ? "yes" : "no");
    }
    return 0;
}
 
