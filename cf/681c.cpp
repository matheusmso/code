#include <bits/stdc++.h>
using namespace std;

priority_queue<int> q;
int n;
vector<pair<int, int>> v;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        char s[30];
        int x;
        scanf(" %s", &s);
        if (s[0] == 'i') {
            scanf(" %d", &x);
            v.push_back(make_pair(0, -x));
            q.push(-x);
        }
        else if (s[0] == 'g') {
            scanf(" %d", &x);
            while (!q.empty()) {
                if (q.top() <= -x) break;
                v.push_back(make_pair(2, 0));
                q.pop();
            }
            if (!q.empty() && x == -q.top()) 
                v.push_back(make_pair(1, -x));
            else {
                v.push_back(make_pair(0, -x));
                q.push(-x);
                v.push_back(make_pair(1, -x));
            }
        }
        else {
            if (!q.empty()) {
                v.push_back(make_pair(2, 0));
                q.pop();
            }
            else {
                v.push_back(make_pair(0, 0));
                v.push_back(make_pair(2, 0));
            }
        }
    }
    printf("%d\n", v.size());
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first == 0)
            printf("insert %d\n", -v[i].second);
        else if (v[i].first == 1)
            printf("getMin %d\n", -v[i].second);
        else
            printf("removeMin\n");
    }
    return 0;
}

