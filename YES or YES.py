t = int(input().strip())

s = [ input().strip() for _ in range(t)]

for chk in s:
    
    if chk.upper() == 'YES':
        print("YES")
    else:
        print("NO")