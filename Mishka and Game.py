n = int(input().strip())

mishka = 0
chris = 0

while n:
    n -= 1

    m , c = map(int, input().strip().split())

    if m>c:
        mishka += 1
    elif c>m:
        chris += 1
    



if mishka>chris:
    print("Mishka")
elif chris>mishka:
    print("Chris")
elif mishka==chris:
    print("Friendship is magic!^^")
