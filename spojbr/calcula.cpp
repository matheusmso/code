#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char s[N];
int n, t;

int main() {
    while (scanf(" %d", &n) && n) {
        printf("Teste %d\n", ++t);
        scanf(" %s", s);
        queue<char> q;
        q.push('+');
        for (int i = 0; s[i]; i++)
            if (!isdigit(s[i]))
                q.push(s[i]);
        char *aux = strtok(s, "+-");
        int ans = 0;
        while (aux != NULL) {
            int x = atoi(aux);
            aux = strtok(NULL, "+-");
            char c = q.front();
            q.pop();
            if (c != '+')
                x = -x;
            ans += x;
        }
        printf("%d\n\n", ans);
    }
    return 0;
}


