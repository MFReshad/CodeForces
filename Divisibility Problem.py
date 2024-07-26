t = int(input().strip())
i=0
def is_divisible(a,b,n):
    if a%b==0:
        return n
    else:
        a+=1
        n+=1
        return is_divisible(a,b,n)

while i<t:
    a, b = map(int, input().strip().split())
    global count
    count = 0
    print(is_divisible(a,b,count))
    i+=1