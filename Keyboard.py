keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"

dir = input().strip()
str = input().strip()
new = ""

if dir == 'R':
    for char in str:
        index = keyboard.find(char)
        new += keyboard[index-1]
if dir == 'L':
    for char in str:
        index = keyboard.find(char)
        new += keyboard[index+1]

print(new)