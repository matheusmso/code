#include <bits/stdc++.h>
using namespace std;

int n;
stack<int> st;

int main() {
    scanf(" %d", &n);
    int x;
    scanf(" %d", &x);
    st.push(x);
    int ans = 0;
    for (int i = 1; i < n; i++) {
        scanf(" %d", &x);
        int aux = 0;
        while (!st.empty() && x > st.top()) {
            st.pop();
            aux++;
        }
        printf("aux = %d\n", aux);
        if (st.empty())  {
            ans += aux-1;
        } else {
            ans += aux;
        }
        st.push(x);
    }
    printf("%d\n", ans);
    return 0;
}

        
