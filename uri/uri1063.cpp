#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n)) {
        if (n == 0)
            return 0;
        char in[300];
        char out[300];
        stack<char> s;
        int i;
        for (i = 0; i < n; i++)
            scanf(" %c", &in[i]);
        for (i = 0; i < n; i++)
            scanf(" %c", &out[i]);
        s.push(in[0]);
        putchar('I');
        i = 1;
        int o = 0;
        while(1) {
            if (s.size() > 0 && s.top() == out[o] && o < n) {
                s.pop();
                o++;
                putchar('R');
            }
            else if (i < n) {
                s.push(in[i++]);
                putchar('I');
            }
            else
                break;
        }
        if (s.size() > 0)
            printf(" Impossible\n");
        else 
            printf ("\n");
    }
    return 0;
}

