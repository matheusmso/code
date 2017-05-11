#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
int q, v[1<<19];

int main() {
    scanf(" %d", &q);
    while (q--) {
        char c;
        char number[20];
        int mask = 0;
        scanf(" %c %s", &c, number);
        if (c == '+') {
            int p = strlen(number);
            for (int k = 0; k < 18 && p-k > 0; k++) {
                if ((number[p-k-1]-'0')%2)
                    mask += (1<<k);
            }
            v[mask]++;
        }
        else if (c == '-') {
            int p = strlen(number);
            for (int k = 0; k < 18 && p-k > 0; k++) {
                if ((number[p-k-1]-'0')%2)
                    mask += (1<<k);
            }
            v[mask]--;
        }
        else {
            int p = strlen(number);
            for (int k = 0; k < 18 && p-k > 0; k++) {
                if (number[p-k-1] == '1')
                    mask += (1<<k);
            }
            printf("%d\n", v[mask]);
        }
    }
    return 0;
}

