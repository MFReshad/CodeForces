t = int(input().strip())
b = []

for _ in range(t):
    n = int(input().strip())
    x, y, temp = 0, 0, 0
    a = input().strip()

    for c in a:
        if c == 'U':
            x += 1
        elif c == 'D':
            x -= 1
        elif c == 'R':
            y += 1
        elif c == 'L':
            y -= 1
        if x == 1 and y == 1:
            temp = 1
            break

    b.append(1 if temp else 0)

for i in range(t):
    print("YES" if b[i] else "NO")
