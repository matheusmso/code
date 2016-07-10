t = int(input())
def fac(x):
    i = 1
    for n in range(x):
        i *= n+1
    return i
for i in range(t):
    n = int(input())
    print(fac(n))

