#include <bits/stdc++.h>
using namespace std;

int n; 
string s;

int main() {
    int ans = 0;
    scanf("%d", &n);
    cin >> s;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        int l;
        bool a;
        if (t.size() > s.size()) {
            if (t.size() == s.size()+1) {
                l = 0;
                a = true;
                for (int k = 0; k < s.size(); k++) {
                    if (s[k] != t[k+l]) {
                        l++;
                        k--;
                    }
                    if (l > 1) {
                        a = false;
                        break;
                    }
                }
                if (a) ans++;
            }
        }
        else if (t.size() < s.size()) {
            if (t.size() == s.size()-1) {
                l = 0;
                a = true;
                for (int k = 0; k < t.size(); k++) {
                    if (t[k] != s[k+l]) {
                        l++;
                        k--;
                    }
                    if (l > 1) {
                        a = false;
                        break;
                    }
                }
                if (a) ans++;
            }
        }
        else {
            a = true;
            l = 0;
            for (int k = 0; k < t.size(); k++) {
                if (t[k] != s[k])
                    l++;
                if (l > 1) {
                    a = false;
                    break;
                }
            }
            if(a) ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}


