#include <iostream>

using namespace std;

int main() {
    int x;
    while (scanf("%d", &x)) {
        if (x != 2002)
            cout << "Senha Invalida" << endl;
        else {
            cout << "Acesso Permitido" << endl;
            break;
        }
    }
    return 0;
}


