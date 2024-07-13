n = int(input())
m = [input().strip() for _ in range(n)]
group_of_magnet = 1

for i in range(len(m)):
    if(i+1<len(m)):
        if(m[i+1]==m[i]):
            continue
        else:
            group_of_magnet+=1

print(group_of_magnet)