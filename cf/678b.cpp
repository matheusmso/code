#include <bits/stdc++.h>
using namespace std;

int y;

bool isLeap(int y) {
    if (y%400 == 0)
        return true;
    if (y%100 != 0 && y%4 == 0)
        return true;
    return false;
}

int main() {
    scanf("%d", &y);
    int att = y;
    int ans = 0;
    while (1) {
        ans = (ans+1+isLeap(++att))%7;
        if (ans == 0 && isLeap(y) == isLeap(att))
            break;
    }
    printf("%d\n", att);
    return 0;
}


