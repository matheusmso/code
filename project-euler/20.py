#! /usr/local/bin/python3

n = 1

for i in range(1, 101):
    n *= i

ans = 0

for c in str(n):
    ans += int(c)

print(ans)
