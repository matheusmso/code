#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
string w;
int t, n;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector<string> pre, pos;
        string mid = "";
        bool corrupt = false;
        for (int i = 0; i < n; i++) {
            cin >> w;
            if (corrupt)
                pre.push_back(w);
            else if (w[0] == '#')
                pos.push_back(w);
            else {
                corrupt = true;
                mid = w;
            }
        }
        for (int i = 0; i < pre.size(); i++)
            cout << pre[i] << " ";
        if (mid.size())
            cout << mid << " ";
        for (int i = 0; i < pos.size(); i++)
            cout << pos[i] << " ";
        cout << endl;
    }
    return 0;
}

            
