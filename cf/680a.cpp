#include <bits/stdc++.h>
using namespace std;

int a[5];
int f[105];
int m, t;

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", a+i);
        t += a[i];
        f[a[i]]++;
        m = max(f[a[i]], m);
    }
    /*int t2, t3, t4, t5;
    t2 = t3 = t4 = t5 = -1;
    for (int i = 0; i < 5; i++) {
        if (f[a[i]] == 2)
            t2 = a[i];
        else if (f[a[i]] == 3)
            t3 = a[i];
        else if (f[a[i]] == 4)
            t4 = a[i];
        else
            t5 = */
    if (m == 1) {
        printf("%d\n", t);
    }
    else if (m == 2) {
        int count = 0;
        int t1 = 0;
        int pos;
        for (int i = 0; i < 5; i++)
            if (f[a[i]] != 1)
                count++;
        if (count == 2) {
            for (int i = 0; i < 5; i++) {
                if (f[a[i]] != 1) {
                    t -= 2*a[i];
                    break;
                }
            }
            printf("%d\n", t);
        }
        else if (count == 4) {
            pos = -1;
            for (int i = 0; i < 5; i++) {
                if (f[a[i]] != 1) {
                    if (pos != -1) {
                        pos = max(pos, a[i]);
                    }
                    else 
                        pos = a[i];
                }
            }
            printf("%d\n", t-2*pos);
        }
    }
    else {
        int count = 0;
        int t3 = -1, t2 = -1, t4 = -1, t1 = -1, t5 = -1;
        for (int i = 0; i < 5; i++) {
            if (f[a[i]] == 2)
                t2 = a[i];
            else if (f[a[i]] == 3)
                t3 = a[i];
            else if (f[a[i]] == 4)
                t4 = a[i];
            else if (f[a[i]] == 5)
                t5 = a[i];
        }
        if (t5 > 0) {
            for (int i = 0; i < 2; i++)
                count += a[i];
            printf("%d\n", count);
        }
        else if (t4 > 0) {
            int ans = 0;
            for (int i = 0; i < 5; i++)
                if (f[a[i]] != 4)
                    ans += a[i];
            printf("%d\n", ans+t4);
        }
        else if (t3 > 0) {
            if (t2 > 0) {
                if (2*t2 > 3*t3) 
                    t -= 2*t2;
                else 
                    t -= 3*t3;
                printf("%d\n", t);
            }
            else
                printf("%d\n", t-3*t3);
        }
    }
    return 0;
}

