n = int(input().strip())
x = list(map(int , input().strip().split()))


for i in x:
    count = 0
    for j in range(1, i+1):
        if(i%j==0):
            count+=1
    if(count==3):
        print("YES")
    else:
        print("NO")    

###################
# NOT EFFICIENT CODE & Coorect