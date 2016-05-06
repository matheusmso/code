#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string s;
    scanf("%d", &N);
    getline(cin, s);
    for (int i = 0; i < N; i++) {
        getline(cin, s);
        for (int j = 0; j < s.size(); j++)
            if (isalpha(s[j]))
                s[j] += 3;
        int k = 0;
        int j = s.size() - 1;
        while (k < j) {
            char c = s[k];
            s[k++] = s[j];
            s[j--] = c;
        }
        for (int k = s.size()/2; k < s.size(); k++)
            s[k] -= 1;
        cout << s << endl;
    }
    return 0;
}


