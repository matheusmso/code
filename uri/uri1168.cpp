#include <iostream>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int a[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (int i = 0; i < N; i++) {
        int x = 0;
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            x += a[s[j] - '0'];
        }
        printf("%d leds\n", x);
    }
    return 0;
}
