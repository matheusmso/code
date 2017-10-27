#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e7+7;
int m;
vector<int> ans;
char s[17];

bool dfs(int bal, int lp, int turn) {
    if (turn == m+1) 
        return true;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '1' && i+1 != lp) {
            if (turn%2 == 1) {
                if (turn == 1) {
                    if (dfs(bal+i+1, i+1, turn+1)) {
                        ans.push_back(i+1);
                        return true;
                    }
                }
                else {
                    if (bal + i+1 > 0) {
                        if (dfs(bal+i+1, i+1, turn+1)) {
                            ans.push_back(i+1);
                            return true;
                        }
                    }
                }
            }
            else {
                if (bal - i-1 < 0) {
                    if (dfs(bal-i-1, i+1, turn+1)) {
                        ans.push_back(i+1);
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    scanf(" %s", s);
    scanf(" %d", &m);
    if (dfs(0, 0, 1)) {
        printf("YES\n");
        reverse(ans.begin(), ans.end());
        for (int t : ans)
            printf("%d ", t);
        printf("\n");
    }
    else
        printf("NO\n");
    return 0;
}


