#include <bits/stdc++.h>
using namespace std;

int t;
string s;
stack<char> st;

int main() {
    scanf("%d", &t);
    for (int h = 0; h < t; h++) {
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i]))
                printf("%c", s[i]);
            else if (s[i] != '(' && s[i] != ')')
                st.push(s[i]);
            if (s[i] == ')') {
                char c = st.top();
                printf("%c", c);
                st.pop();
            }
        }
        printf("\n");
    }
    return 0;
}

