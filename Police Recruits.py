n = int(input().strip())
occur = list(map(int, input().strip().split()))

police = 0
count = 0

for i in range(n):
    if occur[i]== -1:
        if not police:
            count += 1
        else:
            police -= 1
    else:
        police += occur[i]

print(count)