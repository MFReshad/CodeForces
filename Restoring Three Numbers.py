w , x , y , z = map(int, input().strip().split())

sum = [w , x , y , z]
sum.sort()

c = sum[3]-sum[0]
b = sum[3]-sum[1]
a = sum[3]-sum[2]

print(f"{a} {b} {c}")

