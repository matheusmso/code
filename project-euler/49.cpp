#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
int p[N];
vector<lint> pr;

void sieve() {
    for (lint i = 2; i < N; i++)
        if (p[i] == 0) {
            p[i] = 1;
            if (to_string(i).size() == 4)
                pr.push_back(i);
            else if(to_string(i).size() > 4) return;
            for (lint j = i*i; j < N; j += i)
                p[j] = 1;
        }
}

int main() {
    sieve();
    for (lint k : pr) {
        string s = to_string(k);
        set<lint> v;
        v.insert(k);
        int c = 0;
        do {
            lint t = stoi(s);
            if (binary_search(pr.begin(), pr.end(), t)) 
                v.insert(t);
            if (s.size() >= 3);
        } while (next_permutation(s.begin(), s.end()));
        if (s.size() >= 3) {
            vector<lint> vv;
            for (lint j : v)
                vv.push_back(j);
            if (vv[2]-vv[1] == vv[1]-vv[0]) {
                for (int i = 0; i < 3; i++)
                    printf("%lld", vv[i]);
                printf("\n");
            }
        }
    }
    return 0;
}


