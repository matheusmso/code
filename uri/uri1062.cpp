#include <bits/stdc++.h>

using namespace std;

int n, out[1007];

int main() {
    while (scanf("%d", &n) && n != 0) {
        while (scanf("%d", &out[1]) && out[1] != 0) {
            for (int i = 2; i <= n; i++)
                scanf("%d", &out[i]);
            int j = 1;
            stack<int> s;
            s.push(j++);
            bool bad = false;
            for (int i = 1; i <=n; i++) {
                while (s.empty() || s.top() < out[i]) {
                    s.push(j++);
                }
                if (s.top() == out[i])
                    s.pop();
                else {
                    printf("No\n");
                    bad = true;
                    break;
                }
            }
            if (!bad)
                printf("Yes\n");
        }
        printf("\n");
    }
    return 0;
}


