#include <bits/stdc++.h>
using namespace std;

int n, paintings[1007];
map<int,int> m;
map<int,int>::iterator it;

int main() {
    scanf("%d", &n);
    int t;
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        m[t]++;
    }
    int a[1007];
    int count = 0;
    int beauty = 0;
    for (it = m.begin(); it != m.end(); it++) {
        //printf("%d %d\n", it->first, it->second);
        a[count++] = it->second;
    }
    for (int i = 0; i < count-1; i++) {
        if (a[i] == 0)
            continue;
        a[i]--;
        int flips = 0;
        for (int j = i+1; j < count; j++) {
            if (a[j] > 0) {
                a[j]--;
                flips++;
            }
        }
        beauty += flips;
        if (a[i] > 0)
            i--;
    }
    //if (tr)
    //printf("%d\n", n-1);
    //else
    printf("%d\n", beauty);
    return 0;
}
