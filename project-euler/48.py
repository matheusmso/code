#! /usr/local/bin/python3

a = 0
for i in range(1, 1001):
    a += i**i

print(str(a)[-10:])
