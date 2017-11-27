#! /usr/local/bin/python3

ans = 0

for i in range(1, 101):
    for j in range(1, 101):
        a = i**j
        k = 0
        for c in str(a):
            k += int(c)
        ans = max(ans, k)

print(ans)
