#include <bits/stdc++.h>
using namespace std;

string a, b;

int main() {
    cin >> a >> b;
    if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[b.size()-1-i]) {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

