a, b, c = map(int, input().split())

if (a > b and b > c) or (c > b and b > a):
    print(b)
elif (b > a and a > c) or (c > a > b):
    print(a)
else:
    print(c)