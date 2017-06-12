#include <bits/stdc++.h>
using namespace std;

string s;
int n;

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        stack<char> p;
        bool correct = true;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{')
                p.push(c);
            else if (!p.empty() && (p.top()+2 == c || p.top()+1 == c))
                p.pop();
            else {
                correct = false;
                break;
            }
        }
        if (p.empty() && correct)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}

