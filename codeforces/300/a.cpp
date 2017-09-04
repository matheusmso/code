#include <bits/stdc++.h>
using namespace std;

vector<int> v[3];
int n;

int main() {
    scanf(" %d", &n);
    while (n--) {
        int x;
        scanf(" %d", &x);
        if (x < 0)
            v[0].push_back(x);
        else if (x > 0)
            v[1].push_back(x);
        else 
            v[2].push_back(x);
    }
    if (v[0].size()%2 == 0) {
        v[2].push_back(*v[0].rbegin());
        v[0].pop_back();
    }
    if (v[1].size() == 0) {
        for (int i = 0; i < 2; i++) {
            v[1].push_back(*v[0].rbegin());
            v[0].pop_back();
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", v[i].size());
        for (int k : v[i])
            printf("%d ", k);
        printf("\n");
    }
    return 0;
}

