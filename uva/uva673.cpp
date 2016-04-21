#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);
    while (n--) {
        stack<char> s;
        char c;
        do {
            c = getchar();
            if (c == '(' || c == '[')
                s.push(c);
            else if (c == ')') {
                if (s.size() > 0) {
                    if (s.top() == '(')
                        s.pop();
                    else
                        s.push(c);
                }
                else 
                    s.push(c);
            }
            else if (c == ']'){
                if (s.size() > 0) {
                    if (s.top() == '[')
                        s.pop();
                    else
                        s.push(c);
                }
                else 
                    s.push(c);
            }
                
        } while (c != '\n');
        if (s.size () == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

