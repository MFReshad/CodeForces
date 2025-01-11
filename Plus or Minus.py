t = int(input().strip())

while t:
    t -= 1

    a,b,c = map(int,input().strip().split())

    if a+b==c:
        print('+')
    elif a-b==c:
        print('-')