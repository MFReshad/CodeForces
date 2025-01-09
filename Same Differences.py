import math

t = int(input().strip())

while t:
    t -= 1
    
    key = {}
    
    count = 0

    n = int(input().strip())

    a = list(map(int, input().strip().split()))

    for i in range(n):
        dif = a[i]-i

        if dif in key:
            key[dif] += 1
        
        else:        
            key[dif] = 1
    
    

    for i in key:
        num = key[i]
        
        if num>1:
            count = count + math.comb(num, 2)

    print(count)    