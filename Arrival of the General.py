n = int(input().strip())
a = list(map(int, input().strip().split()))

max_num = max(a)
min_num = min(a)

last_min_index = -1
for i in range(n - 1, -1, -1):
    if a[i] == min_num:
        last_min_index = i
        break

dis = a.index(max_num)+len(a)-last_min_index-1

if(a.index(max_num)>last_min_index):
    dis-=1

print(dis)