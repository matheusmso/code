#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

string s;
vector<string> v;
int ans, n, cnt[30], used[30];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
        cnt[s[0]-'a']++;
    }
    for (string a : v) {
        if (cnt[a[0]-'a'] <= 1) continue;
        bool no = false;
        for (int i = 0; i < 30; i++)
            used[i] = 0;
        used[a[0]-'a']++;
        for (int i = 1; i < a.size(); i++)
            used[a[i]-'a']++;
        for (int i = 0; i < 30; i++) {
            if (used[i] == cnt[i]) {
                if (i == a[0]-'a')
                    no = true;
            }
            else if (used[i] > cnt[i])
                no = true;
        }
        if (!no)
            ans++;
    }
    cout << ans << endl;
    return 0;
}


