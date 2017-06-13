#include <bits/stdc++.h>
using namespace std;

int p, m, n, x;
char c;
int hand[12][15][4];
int trans[26];
int size[12];

int main() {
    trans['D'-'C'] = 1;
    trans['H'-'C'] = 2;
    trans['S'-'C'] = 3;
    while (scanf(" %d %d %d", &p, &m, &n) && n) {
        for (int i = 0; i < p; i++)
            size[i] = m;
        memset(hand, 0, sizeof(hand));
        for (int i = 0; i < p*m; i++) {
            scanf(" %d %c", &x, &c);
            hand[i/m][x][trans[c-'C']]++;
            //printf("card = %d %d %d\n", i/m, x, trans[c-'C']);
        }
        scanf(" %d %c", &x, &c);
        int itop = x;
        int ctop = trans[c-'C'];
        int dir = 1;
        int player = 0;
        int extra = 0;
        //printf("top = %d %d\n", itop, ctop);
        if (itop == 12) dir = -dir;
        else if (itop == 7) extra = 2;
        else if (itop == 1) extra = 1;
        else if (itop == 11) player = (player+p+dir)%p;
        bool running = true;
        int cards = 0;
        while (running) {
            for (int i = 0; i < extra; i++) {
                scanf(" %d %c", &x, &c);
                hand[player][x][trans[c-'C']]++;
                size[player]++;
                cards++;
            }
            if (extra) {
                player = (player+p+dir)%p;
                extra = 0;
                continue;
            }
            bool discard = false;
            for (int i = 13; i >= 1 && !discard; i--) {
                for (int j = 3; j >= 0 && !discard; j--) {
                    if (hand[player][i][j] && (i == itop || j == ctop)) {
                        discard = true;
                        itop = i;
                        ctop = j;
                        //printf("player %d discarded %d %d\n", player, i, j);
                        hand[player][i][j]--;
                        size[player]--;
                        if (size[player] == 0) {
                            printf("%d\n", player+1);
                            running = false;
                            break;
                        }
                    }
                }
            }
            if (discard) {
                if (itop == 12) dir = -dir;
                else if (itop == 7) extra = 2;
                else if (itop == 1) extra = 1;
                else if (itop == 11) player = (player+p+dir)%p;
            }
            else {
                scanf(" %d %c", &x, &c);
                cards++;
                if (x == itop || trans[c-'C'] == ctop) {
                    //printf("player %d discarded %d %d\n", player, x, trans[c-'C']);
                    itop = x;
                    ctop = trans[c-'C'];
                    if (itop == 12) dir = -dir;
                    else if (itop == 7) extra = 2;
                    else if (itop == 1) extra = 1;
                    else if (itop == 11) player = (player+p+dir)%p;
                }
                else {
                    hand[player][x][trans[c-'C']]++;
                    size[player]++;
                }
            }
            player = (player+p+dir)%p;
        }
        //printf("a\n");
        while (cards+p*m+1 < n) {
            scanf(" %d %c", &x, &c);
            cards++;
        }
        //printf("b\n");
    }
    return 0;
}
