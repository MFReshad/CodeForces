t = int(input().strip())
n = [int(input().strip()) for _ in range(t)]

def solution(num):
    # None
    arr = []
    point = 10

    while num>0:
        sub = num % point
        num -= sub
        point *= 10
        if sub != 0:
            arr.append(sub)
    
    print(len(arr))
    print(" ".join(map(str, arr[::-1])))

i = 0
while t:
    solution(n[i])
    i+=1
    t-=1