#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;
char v[][20] = {"queue", "priority queue", "stack"};

int main() {
    while (scanf(" %d", &n) != EOF) {
        queue<int> q;
        priority_queue<int> pq;
        stack<int> st;
        bool b[3];
        memset(b, 1, sizeof(b));
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            if (x == 1) {
                q.push(y);
                pq.push(y);
                st.push(y);
            }
            else {
                int a = q.front();
                q.pop();
                if (a != y) b[0] = 0;
                a = pq.top();
                pq.pop();
                if (a != y) b[1] = 0;
                a = st.top();
                st.pop();
                if (a != y) b[2] = 0;
            }
        }
        int aux = 0;
        for (int i = 0; i < 3; i++)
            aux += b[i];
        if (aux == 0)
            printf("impossible\n");
        else if (aux > 1)
            printf("not sure\n");
        else
            for (int i = 0; i < 3; i++)
                if (b[i])
                    printf("%s\n", v[i]);
    }
    return 0;
}


