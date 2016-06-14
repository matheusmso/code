#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, start, last, curr, ca = 1, leng;
    string s, l, c;
    while (scanf("%d", &n) != EOF && n > 0) {
        cin >> s;
        printf("Case %d:\n", ca++);
        start = atoi(s.c_str());
        l = s;
        last = start;
        leng = s.size();
        for (int j = 1; j < n; j++) {
            cin >> c;
            curr = atoi(c.c_str());
            if (curr - last == 1) {
                l = c;
                last = curr;
            }
            else {
                cout << s;
                if (s != l) {
                    int i;
                    for (i = 0; i < leng; i++)
                        if (l[i] != s[i])
                            break;
                    printf("-");
                    for (i; i < leng; i++)
                        printf("%c", l[i]);
                }
                cout << endl;
                l = s = c;
                last = start = curr;
            }
        }
        cout << s;
        if (s != l) {
            int j;
            for (j = 0; j < leng; j++)
                if (l[j] != s[j])
                    break;
            printf("-");
            for (j; j < leng; j++)
                printf("%c", l[j]);
        }
        cout << endl << endl;
    }
    return 0;
}


