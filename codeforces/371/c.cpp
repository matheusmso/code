#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const lint INF = 0x3f3f3f3f3f3f3f3f;
lint b, s, c, pb, ps, pc, fb, fs, fc;
string r;
lint m;

bool f(lint k) {
    lint nb = max(k*fb-b, 0ll);
    lint ns = max(k*fs-s, 0ll);
    lint nc = max(k*fc-c, 0ll);
    return (m >= nb*pb + ns*ps + nc*pc);
}

int main() {
    cin >> r;
    cin >> b >> s >> c >> pb >> ps >> pc >> m;
    for (char cc : r) {
        if (cc == 'B')
            fb++;
        else if (cc == 'S')
            fs++;
        else
            fc++;
    }
    lint low = 0, high = 1e13;
    while (low <= high) {
        lint mid = (low + high)/2;
        if (f(mid)) low = mid + 1;
        else high = mid - 1;
    }
    cout << high << endl;
    return 0;
}

