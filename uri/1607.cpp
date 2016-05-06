#include <iostream>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        string a, b;
        cin >> a >> b;
        int op = 0;
        for (int j = 0; j < a.size(); j++) {
                op += ((b[j]-a[j])+26)%26;
        }
        cout << op << endl;
    }
    return 0;
}


