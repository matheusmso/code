#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
char s[N];
int n;
vector<char> ans;

int main() {
    scanf(" %s", s);
    n = strlen(s);
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if ((int)ans.size() >= 2 && 
               (s[i] == ans[ans.size()-1] && s[i] == ans[ans.size()-2]))
            continue;
        if ((int)ans.size() >= 3 && (ans[ans.size()-2] == ans[ans.size()-3])
                && s[i] == ans[ans.size()-1])
            continue;
        ans.push_back(s[i]);
    }
    for (char c : ans)
        printf("%c", c);
    printf("\n");
    return 0;
}

