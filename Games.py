n = int(input().strip())

h = []
a = []

for _ in range(n):
    h_i, a_i = map(int, input().strip().split()) 
    h.append(h_i)
    a.append(a_i)

count = 0


for i in range(len(h)):
    for j in range(len(a)):
        if h[i]==a[j]:
            count += 1

print(count)
