#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int M = 1e4+7;
const int N = 2e1+7;
char s[N];
int c[M];
vector<int> p;

void build() {
    p.push_back(1);
    for (int i = 2; i < M; i++) {
        if (c[i] == 0) {
            p.push_back(i);
            for (int j = i*i; j < M; j += i)
                c[j] = 1;
        }
    }
}


int main() {
    build();
    while (scanf(" %s", s) != EOF) {
        int x = 0;
        for (int i = 0; s[i]; i++) {
            if (isupper(s[i])) x += s[i]-'A'+27;
            else x += s[i]-'a'+1;
        }
        bool f = binary_search(p.begin(), p.end(), x);
        if (f)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}


