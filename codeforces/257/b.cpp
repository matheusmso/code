#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, m, c[2];

int main() {
    scanf(" %d %d", &n, &m);
    int a = 0;
    int b = 0;
    vector<int> v;
    c[0] = n-1;
    c[1] = m;
    v.push_back(0);
    for (int i = 1; i < n+m; i++) {
        if (i%2 == 1) {
            if (c[1-v[i-1]]) {
                v.push_back(1-v[i-1]);
                c[1-v[i-1]]--;
                b++;
            }
            else {
                v.push_back(v[i-1]);
                c[v[i-1]]--;
                a++;
            }
        }
        else {
            if (c[v[i-1]]) {
                v.push_back(v[i-1]);
                c[v[i-1]]--;
                a++;
            }
            else {
                v.push_back(1-v[i-1]);
                c[1-v[i-1]]--;
                b++;
            }
        }
    }
    int ba = a;
    int bb = b;
    b = a = 0;
    v.clear();
    c[0] = n;
    c[1] = m-1;
    v.push_back(1);
    for (int i = 1; i < n+m; i++) {
        if (i%2 == 1) {
            if (c[1-v[i-1]]) {
                v.push_back(1-v[i-1]);
                c[1-v[i-1]]--;
                b++;
            }
            else {
                v.push_back(v[i-1]);
                c[v[i-1]]--;
                a++;
            }
        }
        else {
            if (c[v[i-1]]) {
                v.push_back(v[i-1]);
                c[v[i-1]]--;
                a++;
            }
            else {
                v.push_back(1-v[i-1]);
                c[1-v[i-1]]--;
                b++;
            }
        }
    }
    if (a > ba) {
        ba = a;
        bb = b;
    }
    printf("%d %d\n", ba, bb);
    return 0;
}


