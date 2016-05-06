#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<char> s;
    char c;
    bool bad = false;
    do {
        c = getchar();
        if (c == '(')
            s.push(c);
        if (c == ')') {
            if (s.size() > 0 && s.top() == '(')
                s.pop();
            else 
                bad = true;
        }
        if (c == '\n'){
            if(!bad && s.size() == 0)
                printf("correct\n");
            else {
                printf("incorrect\n");
                bad = false;
            }
            while (s.size() > 0)
                s.pop();
        }
    } while (c != EOF);
    return 0;
}


