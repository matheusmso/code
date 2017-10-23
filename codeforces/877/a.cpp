#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
string s;

int main() {
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'D') {
            if (s.substr(i, 5) == "Danil") cnt++;
        }
        else if (s[i] == 'O') {
            if (s.substr(i, 4) == "Olya") cnt++;
        }
        else if (s[i] == 'S') {
            if (s.substr(i, 5) == "Slava") cnt++;
        }
        else if (s[i] == 'A') {
            if (s.substr(i, 3) == "Ann") cnt++;
        }
        else if (s[i] == 'N') {
            if (s.substr(i, 6) == "Nikita") cnt++;
        }
    }
    printf("%s\n", cnt == 1 ? "YES" : "NO");
    return 0;
}


