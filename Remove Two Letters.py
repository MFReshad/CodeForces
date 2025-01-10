#tutorial of codeforces
t = int(input().strip())

while t:
    t -= 1

    n = int(input().strip())

    s = input().strip()

    count = n - 1
    
    for i in range(n-2):
        if s[i]==s[i+2]:
            count -= 1
        

    print(count)


###### memory limit exist

# t = int(input().strip())

# while t:
#     t -= 1

#     substring = set()

#     n = int(input().strip())

#     s = input().strip()

#     for i in range(n-1):

#         a = hash(s[:i] + s[i+2:])

#         substring.add(a)


#     print(len(substring))






######### EXTRAS out of solve ########
# n = 13568
# s = str(n)
# for i in range(len(s)-1):
#     print(s[:i] + s[i+2:])
# # print(num[1:])
# # print(num[:1])