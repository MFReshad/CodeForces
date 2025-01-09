n = int(input().strip())
name = [ input().strip() for _ in range(n)]
check = {}
def system(t):
    if t in check:
        count = str(check[t])
        check[t] += 1
        return t+count
    else:
        check[t] = 1
        return 'OK'

for nam in name:
    print(system(nam))
    
