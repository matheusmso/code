#include <bits/stdc++.h>
using namespace std;

string s1, s2;
vector<int> v[15];

int main() {
    cin >> s1 >> s2;
    int p = 0;
    for (char c : s1) {
        if (c == '+') p++;
        else p--;
    }
    int t = 0;
    int g = 0;
    for (char c : s2) {
        if (c == '+') t++;
        else if (c == '-') t--;
        else g++;
    }
    v[0].push_back(0);
    for (int i = 1; i <= g; i++) {
        for (int k : v[i-1]) {
            v[i].push_back(k+1);
            v[i].push_back(k-1);
        }
    }
    int s = 0;
    for (int k : v[g])
        if (t+k == p) s++;
    printf("%.10lf\n", (double)s/v[g].size());
    return 0;
}

    
    
