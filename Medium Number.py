t = int(input().strip())

while t:
    t -= 1
    a,b,c = map(int, input().strip().split())
    total = a+b+c
    min_ = min(a,b,c)
    max_ = max(a,b,c)
    medium = total - (min_ + max_)
    print(medium)