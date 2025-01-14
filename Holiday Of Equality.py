n = int(input().strip())

a = list(map(int, input().strip().split()))

max_ = max(a)

sum = 0

for i in range(n):
    sum += (max_-a[i])

print(sum)