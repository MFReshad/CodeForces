t = int(input().strip())

while t:
    t-=1
    sum1 = 0
    sum2 = 0
    s = input()
    for i in range(len(s)):
        if i<3:
            sum1 += int(s[i])
        else:
            sum2 += int(s[i])
    
    if sum1 == sum2:
        print("YES")
    else:
        print("NO")