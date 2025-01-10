t = int(input().strip())

while t:
    t -= 1
    a , b, c = map(int, input().strip().split())

    if a+b == c or b+c == a or a+c==b:
        print("YES")
    else:
        print("NO")