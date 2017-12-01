#! /usr/local/bin/python3

ans = 0

for i in range(1, 11):
    for j in range (1, 100001):
        if len(str(i**j)) != j:
            break
        if len(str(i**j)) == j:
            ans += 1
print(ans)
