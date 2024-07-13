n , l = map(int, input().split())
v = list(map(int, input().split()))

v.sort()

max_dis = 0.0

for i in range (1,n):
    max_dis = max(max_dis, v[i] - v[i-1])

max_dis = max(max_dis/2.0 , v[0])
max_dis = max(max_dis , l - v[-1])

print(f"{max_dis:.10f}")