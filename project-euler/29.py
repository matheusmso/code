#! /usr/local/bin/python3

ans = {}

for a in range(2, 101):
    for b in range(2, 101):
        ans[a**b] = 1

print(len(ans))
