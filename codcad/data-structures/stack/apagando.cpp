#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, d;
char s[N];

void pans (stack<int> &st) {
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    pans(st);
    printf("%d", x);
}

int main() {
    while (scanf(" %d %d", &n, &d) != EOF && n) {
        scanf(" %s", s);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && (n-i-1+st.size() >= n-d) && st.top() < s[i]-'0')
                st.pop();
            st.push(s[i]-'0');
        }
        while (st.size() > n-d)
            st.pop();
        pans(st);
        printf("\n");
    }
    return 0;
}

