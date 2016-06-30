#include <bits/stdc++.h>
using namespace std;

int main() {
    int m = -1;
    for (int i = 999; i > 99; i--) {
        for (int j = 999; j > 99; j--) {
            string t = to_string(i*j);
            int l,r;
            for (l = 0, r = t.size()-1; l<r; l++, r--) 
                if (t[l] != t[r])
                    break;
            if (t.size()%2 == 1 && l == r)
                m = max(i*j, m);
            if (t.size()%2 == 0 && l == r+1)
                m = max(i*j, m);
        }
    }
    cout << m << endl;
    return 0;
}

