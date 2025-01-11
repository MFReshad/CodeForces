a, b = map(int, input().strip().split())

mn = min(a,b)
mx = max(a,b)

dif = mx-mn

print(mn, dif//2)