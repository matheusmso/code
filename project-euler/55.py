#! /usr/local/bin/python3

def isPal(a):
    for i in range(len(a)):
        if a[i] != a[len(a)-1-i]:
            return False
    return True

ans = 0

for i in range(0, 10000):
    k = i
    for j in range(50): 
        k += int(str(k)[::-1])
        if isPal(str(k)):
            break
    if not isPal(str(k)):
        ans += 1
        print(i)

print(ans)

