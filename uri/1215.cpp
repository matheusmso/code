#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e2+7;
char s[N];
set<string> st;

int main() {
    while (scanf(" %[^\n]", s) != EOF) {
        int l = 0;
        int r = 0;
        int n = strlen(s);
        while (l < n) {
            while(l < n && !isalpha(s[l])) l++;
            r = l;
            while(r < n && isalpha(s[r])) r++;
            for (int i = l; i < r; i++)
                s[i] = tolower(s[i]);
            st.insert(string(s+l, r-l));
            l = r;
        }
    }
    bool f = true;
    for (string t : st) 
        if (t.size())
            printf("%s\n", t.c_str());
    return 0;
}


