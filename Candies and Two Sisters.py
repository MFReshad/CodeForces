t = int(input().strip())
n = [int(input().strip()) for _ in range(t)]

i = 0
while t:
    print(int((n[i]-1)/2))
    t-=1
    i+=1