#include <bits/stdc++.h>

using namespace std;

int color[80];
int size[80];
string s[80];

bool c(int x, int y) {
    if (color[x] < color[y])
        return true;
    if (color[x] > color[y])
        return false;
    if (size[x] < size[y])
        return true;
    if (size[x] > size[y])
        return false;
    if (s[x].compare(s[y]) < 0)
        return true;
    return false;
}


int main() {
    int t;
    bool line = false;
    while (scanf("%d", &t) == 1) {
        if (t == 0)
            return 0;
        int aux[t];
        if (line)
            printf("\n");
        line = true;
        for (int i = 0; i < t; i++) {
            char l[100];
            scanf(" %[^\n]", l);
            string bla = l;
            s[i] = bla;
            scanf(" %s", l);
            if (l[0] == 'b')
                color[i] = 0; //0 = white
            else
                color[i] = 1;
            scanf(" %s", l);
            if (l[0] == 'P')
                size[i] = 0;
            else if(l[0] == 'M')
                size[i] = 1;
            else
                size[i] = 2;
            aux[i] = i;
        }
        sort(aux, aux+t, c);
        for (int i = 0; i < t; i++) {
            if (color[aux[i]] == 1)
                printf("vermelho ");
            else
                printf("branco ");
            if (size[aux[i]] == 0)
                printf("P ");
            else if (size[aux[i]] == 1)
                printf("M ");
            else
                printf("G ");
            printf("%s\n", s[aux[i]].c_str());
        }
    }
    return 0;
}


