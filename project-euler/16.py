#! /usr/local/bin/python3

k = 2**1000
ans = 0

for c in str(k):
    ans += int(c)

print(ans)
