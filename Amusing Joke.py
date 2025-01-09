guest = input().strip()
host = input().strip()
found = input().strip()

merg = guest+host
merg = list(merg)
found = list(found)
merg.sort()
found.sort()

if merg == found:
    print("YES")
else:
    print("NO")