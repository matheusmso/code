#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string s;
    bool x = true;
    while (getline(cin,s)) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                cout << " ";
                continue;
            }
            if (x) 
                printf("%c", toupper(s[i]));
            else
                printf("%c", tolower(s[i]));
            x = !x;
        }
        cout << endl;
        x = true;
    }
    return 0;
}


