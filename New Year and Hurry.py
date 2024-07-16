n , k = map(int, input().strip().split())
# print(n)
count = 0
time = 0
i=1
while i <= n:
    # print(i)
    time = time + i*5
    if(time+k<=240):
        count+= 1
    i+=1
print(count)