#! /usr/local/bin/python3

import sys

ans = 0
for line in sys.stdin:
    ans += int(line)

print(str(ans)[:10])


