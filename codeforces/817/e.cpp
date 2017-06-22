#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int q, trie[32*N][2], v[32*N], nodes;

void insert(int p, int var) {
    int root = 1;
    for (int i = 31; i >= 0; i--) {
        v[root] += var;
        bool aux = (bool)(p & (1<<i));
        if (trie[root][aux])
            root = trie[root][aux];
        else {
            nodes++;
            trie[root][aux] = nodes;
            root = nodes;
        }
    }
    v[root] += var;
}

void query(int p, int l) {
    int ans = 0;
    int root = 1;
    for (int i = 31; i >= 0; i--) {
        bool pi = (bool)(p & (1<<i));
        bool li = (bool)(l & (1<<i));
        if (li) {//li == 1 can be less
            ans += v[trie[root][pi]];
            root = trie[root][1-pi];
        }
        else root = trie[root][pi];
    }
    printf("%d\n", ans);
}

int main() {
    scanf(" %d", &q);
    nodes = 1;
    while (q--) {
        int op, p, l;
        scanf(" %d", &op);
        if (op == 3) {
            scanf(" %d %d", &p, &l);
            query(p, l);
        }
        else {
            scanf(" %d", &p);
            if (op == 1)
                insert(p, 1);
            else
                insert(p, -1);
        }
        /*for (int i = 0; i < 100; i++) {
            printf("i = %d ", i);
            for (int j = 0; j < 2; j++) {
                printf("%d ", trie[i][j]);
            }
            printf("%d nodes = %d\n", v[i], nodes);
        }*/
    }
    return 0;
}
