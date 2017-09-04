#include <bits/stdc++.h>
using namespace std;

string s;
int sum;

int sod(int k) {
    int aux = 0;
    while (k) {
        aux += k%10;
        k /= 10;
    }
    return aux;
}

int main() {
    cin >> s;
    for (char c : s)
        sum += c-'0';
    int ans = s.size() > 1;
    while (sum >= 10) {
        sum = sod(sum);
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}


