from bisect import bisect_right

n = int(input().strip())
x = list(map(int , input().strip().split()))
q = int(input().strip())
d = [int(input().strip()) for _ in range(q)]

# for i in d:
#     count = 0
#     # print("i ", i)
#     for j in x:
#         # print("j ",j)
#         if(i>=j):
#             count+=1
#     print(count)


#chatgpt
# Sort the list x
x.sort()

# Process each query using binary search
for i in d:
    count = bisect_right(x, i)  # Count elements <= i
    print(count)
