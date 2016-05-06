#include <iostream>

using namespace std;

int main() {
    while(1) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < y)
            cout << "Crescente" << endl;
        else if (y < x)
            cout << "Decrescente" << endl;
        else
            break;
    }
    return 0;
}


