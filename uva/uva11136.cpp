#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    multiset <int> s;
    while (scanf(" %d", &n)) {
        if (n == 0) 
            return 0;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            int k;
            scanf("%d", &k);
            for (int j = 0; j < k; j++) {
                int bill;
                scanf("%d", &bill);
                s.insert(bill);
            }
            multiset<int>::iterator a;
            a = (--s.end());
            total += *a;
            s.erase(a);
            a = (s.begin());
            total -= *a;
            s.erase(a);
        }
        printf("%lld\n", total);
        s.clear();
    }
    return 0;
}


