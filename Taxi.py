import math

n = int(input())
s = list(map(int, input().split()))

s.sort(reverse=True)
taxi = 0
i=0
taxi_one = 0
# for i in range (len(s)):
while i<len(s):
    # print(i)
    if(s[i] == 4):
        taxi+=1
    elif(s[i] == 3):
        if s[-1] == 1:
            s.pop()
        taxi += 1
    elif s[i] == 2:
        if i+1<len(s) and s[i+1] == 2:
            i+=1
            
        elif s[-1] == 1:
            if s[-2] == 1:
                s.pop()
                s.pop()
            else:
                s.pop()
        taxi+=1
    elif s[i] == 1:
        taxi_one+=1
    i+=1
taxi_one = math.ceil(taxi_one / 4)
print(taxi+taxi_one)


'''
chatgpt
# Example list of group sizes
s = [1, 1, 2, 2, 3, 4, 4]

# Count the groups
groups_of_1 = s.count(1)
groups_of_2 = s.count(2)
groups_of_3 = s.count(3)
groups_of_4 = s.count(4)

# Start calculating taxis
taxis = groups_of_4  # Each group of 4 needs a separate taxi

# Pair groups of 3 with groups of 1
pairs_of_3_and_1 = min(groups_of_3, groups_of_1)
taxis += pairs_of_3_and_1
groups_of_3 -= pairs_of_3_and_1
groups_of_1 -= pairs_of_3_and_1

# Remaining groups of 3
taxis += groups_of_3  # Each remaining group of 3 needs a separate taxi

# Pair groups of 2 together
taxis += groups_of_2 // 2
remaining_groups_of_2 = groups_of_2 % 2

# If one group of 2 is left, pair it with up to two groups of 1
if remaining_groups_of_2 == 1:
    if groups_of_1 >= 2:
        taxis += 1
        groups_of_1 -= 2
    else:
        taxis += 1
        groups_of_1 = 0

# Remaining groups of 1
taxis += (groups_of_1 + 3) // 4  # Each taxi can take up to 4 people

print(taxis)
'''  