#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, max = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        bool pr = false;
        char l[1007];
        vector<string> v;
        scanf(" %[^\n]", l);
        char *p = strtok (l, " ");
        while (p != NULL) {
            string aux = p;
            if (aux.size() > max)
                max = aux.size();
            v.push_back(aux);
            p = strtok (NULL, " ");
        }
        while (max != 0) {
            for (int j = 0; j < v.size(); j++) {
                if (v[j].size() == max) {
                    if (pr)
                        printf(" ");
                    printf("%s", v[j].c_str());
                    pr = true;
                }
            }
            max--;
        }
        printf("\n");
        max = 0;
        for (int j = 0; j < 1007; j++)
            l[j] = 0;
        v.clear();
    }
    return 0;
}



