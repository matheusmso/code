#include <iostream>

using namespace std;

bool isT(int a, int b, int c) {
    return (a < b+c) && (b < a+c) && (c < a+b);
}

int main () {
    int a, b, c, d;
    scanf ("%d %d %d %d", &a, &b, &c, &d);
    if (isT(a,b,c)) {
        cout << "S" << endl;
        return 0;
    }
    if (isT(a,b,d)) {
        cout << "S" << endl;
        return 0;
    }
    if (isT(a,c,d)) {
        cout << "S" << endl;
        return 0;
    }
    if (isT(b,c,d)) {
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}


