#include <bits/stdc++.h>
using namespace std;

char ms[100][100];
int n;

int main() {
    while(scanf("%d", &n) && n != 0) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if ((i/n)%2 == 0)
                ms[i/n][i%n] = s[i];
            else 
                ms[i/n][n-(i%n)-1] = s[i];
        }
        for (int j = 0; j < n; j++)
            for (int i = 0; i < s.size()/n; i++)
                printf("%c", ms[i][j]);
        printf("\n");
    }
    return 0;
}

