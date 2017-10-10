#include <bits/stdc++.h>
using namespace std;

string a, b;

void end() {
    printf("NO\n");
    exit(0);
}

int main() {
    cin >> a >> b;
    if (a.size() != b.size()) end();
    if (a.size() == 1) {
        if (a[0] == b[0])
            printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == '1' || a[i-1] == '1')
            a[i] = a[i-1] = '1';
        if (b[i] == '1' || b[i-1] == '1')
            b[i] = b[i-1] = '1';
    }
    for (int i = a.size()-1; i >= 1; i--) {
        if (a[i] == '1' || a[i-1] == '1')
            a[i] = a[i-1] = '1';
        if (b[i] == '1' || b[i-1] == '1')
            b[i] = b[i-1] = '1';
    }
    for (int i = 0; i < b.size(); i++) 
        if (a[i] != b[i])
            end();
    printf("YES\n");
    return 0;
}
