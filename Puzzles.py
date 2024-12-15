n , m = map(int, input().strip().split())
f = list(map(int, input().strip().split()))

f.sort()

min_diff = float('inf')

for i in range(m-n+1):
    dif = f[i+n-1]-f[i]
    min_diff = min(min_diff,dif)

print(min_diff)