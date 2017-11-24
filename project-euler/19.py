#! /usr/local/bin/python3

import datetime

l = datetime.date(1901, 1, 1)
r = datetime.date(2001, 1, 1)
d = datetime.timedelta(1)

ans = 0

while l != r:
    if l.weekday() == 6 and l.day == 1:
        ans += 1
    l += d


print(ans)
