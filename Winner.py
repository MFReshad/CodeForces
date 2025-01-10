n = int(input().strip())



key = {}
max = float('-inf')
winner = ""


for _ in range(n):

    name, score  = input().strip().split()
    # number_str = ''.join(c for c in text if c.isdigit() or c == '-')
    # number = int(number_str)
    # text = text.replace(number_str, "" ).strip()
    score = int(score)

    if name in key:  
        key[name] += score

    else: 
        key[name] = score

    if key[name] > max:
        max = key[name]
        winner = name 

for name in key:
    if key[name] > max:
        max = key[name]
        winner = name

print(winner)

