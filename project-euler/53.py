#! /usr/local/bin/python3

f = []

f.append(1)
for i in range(1, 101):
    f.append(f[len(f)-1]*i)

ans = 0

for i in range(1, 101):
    for j in range(1, i+1):
        if f[i]/(f[j]*f[i-j]) > 1e6:
            ans += 1

print(ans)
