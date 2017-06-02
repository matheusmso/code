#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf(" %d", &t);
    while (t--) {
        int x1, x2, y1, y2, a1, a2, b1, b2;
        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
        scanf(" %d %d %d %d", &a1, &b1, &a2, &b2);
        bool val = false;
        if (x1 == x2 && a1 == a2) {
            if (x1 == a1 && (max(max(y1, y2), max(b1, b2)) - min(min(b1, b2), min (y1, y2)) + 1 < abs(y1 - y2) + 1 + abs(b1 - b2) + 1)) val = true;
        }
        else if (y1 == y2 && b1 == b2) {
            if (y1 == b1 && (max(max(a1, a2), max(x1, x2)) - min(min(x1, x2), min(a1, a2)) + 1 < abs(a1 - a2) + 1 + abs(x1 - x2) + 1)) val = true;
        }
        else {
            if (x1 == x2) {
                if ((max(y1, y2) == b1 || min(y1, y2) == b1) && (max(a1, a2) == x1 || min(a1, a2) == x1)) val = true;
            }
            else if (y1 == y2) {
                if ((max(x1, x2) == a1 || min(x1, x2) == a1) && (max(b1, b2) == y1 || min(b1, b2) == y1)) val = true;
            }
        }
        printf("%s\n", val ? "yes" : "no");
    }
    return 0;
}
 