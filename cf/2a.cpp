#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> m;
unordered_map<string,int>::iterator it;
int n;
struct play{
    int v;
    string s;
};
play game[1007];

int main() {
    scanf("%d", &n);
    string winner;
    int maxs = 0;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        game[i].v = x;
        game[i].s = s;
        m[s] += x;
    }
    for (it = m.begin(); it != m.end(); it++) 
        maxs = max(maxs, (*it).second);
    unordered_map<string,int> temp;
    for (int i = 0; i < n; i++) {
        temp[game[i].s] += game[i].v;
        if (temp[game[i].s] >= maxs && m[game[i].s] == maxs) {
            winner = game[i].s;
            break;
        }
    }
    cout << winner << endl;
    return 0;
}

