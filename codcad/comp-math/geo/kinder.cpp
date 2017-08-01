#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

pair<int, int> p[7];

pair<int, int> operator+ (pair<int, int> a, pair<int, int> b) {
    return {a.x+b.x, a.y+b.y};
}

pair<int, int> operator- (pair<int, int> a, pair<int, int> b) {
    return {a.x-b.x, a.y-b.y};
}

int dot(pair<int, int> a, pair<int, int> b) {
    return a.x*b.x + a.y*b.y;
}

int cross(pair<int, int> a, pair<int, int> b) {
    return a.x*b.y - a.y*b.x;
}

int dist(pair<int, int> a, pair<int, int> b) {
    pair<int, int> c = a - b;
    return c.x*c.x + c.y*c.y;
}

int main() {
    int x, y;
    for (int i = 0; i < 7; i++) {
        scanf(" %d %d", &x, &y);
        p[i] = {x, y};
    }

    if (dot(p[1]-p[0], p[2]-p[0]) > 0 && 
            dist(p[0], p[1]) == dist(p[0], p[2]) && 
            cross(p[2]-p[1], p[4]-p[1]) == 0 &&
            cross(p[2]-p[1], p[3]-p[1]) == 0 &&
            p[1]+p[2] == p[3]+p[4] &&
            dist(p[1], p[2]) > dist(p[3], p[4]) &&
            dot(p[5]-p[3], p[2]-p[1]) == 0 && 
            dot(p[6]-p[4], p[2]-p[1]) == 0 &&
            dist(p[3], p[5]) == dist(p[4], p[6]) &&
            1ll*cross(p[0]-p[1], p[2]-p[1])*cross(p[6]-p[1], p[2]-p[1]) < 0ll)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}

