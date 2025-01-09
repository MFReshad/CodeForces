n , m , a, b = map(int, input().strip().split())
# m = int(input().strip())
# a = int(input().strip())
# b = int(input().strip())

import math
min_cost = int(min(a,b/m)*n)
print(min_cost)
