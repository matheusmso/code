#include <bits/stdc++.h>
using namespace std;

char t[26];
int n;

int main() {
    scanf("%d", &n);
    string s;
    for (int i = 0; i < 26; i++)
        t[i] = 'A' + i;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int inversion = 0;
        for (int k = 0; k < 

