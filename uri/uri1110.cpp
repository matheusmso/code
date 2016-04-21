#include <bits/stdc++.h>

using namespace std;

int main () {
    int y;
    while (scanf("%d", &y)) {
        if (y == 0)
            return 0;
        queue<int> q;
        for (int i = 0; i < y; i++)
            q.push(i+1);
        printf("Discarded cards: ");
        while (q.size() > 2) {
            printf("%d, ", q.front());
            q.pop();
            int x = q.front();
            q.pop();
            q.push(x);
        }
        printf("%d\n", q.front());
        q.pop();
        printf("Remaining card: %d\n", q.front());
    }
    return 0;
}

