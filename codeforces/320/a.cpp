#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    int k = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            k = 0;
        else if (s[i] == '4') {
            if (k == -1) {
                printf("NO\n");
                return 0;
            }
            k++;
        }
        else {
            printf("NO\n");
            return 0;
        }
        if (k == 3) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}


