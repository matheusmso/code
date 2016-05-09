#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, maxindex = 0, max = 1;
    map<int, int> m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (m.find(x) != m.end()) {
            m[x]++;
            if (m[x] > max) {
                max = m[x];
                maxindex = x;
            }
        }
        else 
            m[x] = 1;
            if (m.size() == 1)
                maxindex = x;
    }
    printf("%d\n", maxindex);
    return 0;
}
    

