#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i*1234567 <= n; i++) {
        for (int j = 0; i*1234567+j*123456 <=n; j++) {
            if ((n-(i*1234567+j*123456))%1234 == 0) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}

