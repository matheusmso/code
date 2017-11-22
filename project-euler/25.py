#! /usr/local/bin/python3

a = 1
b = 1
ans = 2

while len(str(a+b)) < 1000 :
    c = a + b
    a = b
    b = c
    ans += 1

print(ans+1)
print(a+b)
