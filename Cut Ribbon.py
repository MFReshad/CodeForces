n , a, b, c = map(int, input().strip().split())

if a+b+c<=n:
    print(3)
elif a+b<=n or b+c<=n or a+c<= n:
    print(2)
else:
    print(1)

