#! /usr/local/bin/python3

ans = 0
m = [0 for x in range(1000)]
s = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]

def num(k):
    a = 0
    while k > 0:
        a += s[k%10]
        k //= 10
    return a

for i in range(1, 10000001):
    n = num(i)
    while n != 1 and n != 89:
        if m[n] != 0:
            n = m[n]
            break
        else:
            n = num(n)
    if n == 89:
        m[n] = 89
        ans += 1
    else:
        m[n] = 1

print(ans)
