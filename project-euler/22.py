#! /usr/local/bin/python3

v = input().split(",")
v.sort()

ans = 0
pos = 1

for i in v:
    t = 0
    for c in i[1:-1]:
        t += ord(c) - ord('A') + 1
    if i[1:-1] == "COLIN":
        print(i, i[1:-1], t, pos)
    ans += pos*t
    pos += 1

print(ans)
