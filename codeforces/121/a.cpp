#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
int l, r;
vector<lint> aux[10];
vector<lint> lucky;

void generate() {
    aux[0].push_back(4);
    aux[0].push_back(7);
    for (int i = 1; i <= 9; i++) {
        for (lint k : aux[i-1]) {
            aux[i].push_back(k*10+4);
            aux[i].push_back(k*10+7);
        }
    }
    for (int i = 0; i <= 9; i++)
        for (lint k : aux[i])
            lucky.push_back(k);
}

int main() {
    generate();
    //cout << *lucky.rbegin() << endl;
    //cout << lucky.size() << endl;
    scanf(" %d %d", &l, &r);
    lint ans = 0;
    int p = lower_bound(lucky.begin(), lucky.end(), l) - lucky.begin();
    while (1) {
        //cout << p << " " << lucky[p] << endl;
        if (lucky[p] >= r) {
            ans += (lint)(r-l+1)*lucky[p];
            break;
        }
        ans += (lint)(lucky[p]-l+1)*lucky[p];
        l = lucky[p++]+1;
    }
    cout << ans << endl;
    return 0;
}
