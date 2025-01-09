n = int(input().strip())

s = input().strip()

key = {}

count = 0

for char in s:
    if char.islower():
        # has_key = char
        if char in key:
            key[char] += 1
        else:
            key[char] = 1
    
    if char.isupper():
        key_need = char.lower()
        if key_need in key:
            if key[key_need] > 0:
                key[key_need] -= 1
            else:
                count += 1
        else:
            count += 1
    
print(count)
