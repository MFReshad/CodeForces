s = list(map(int, input().strip().split()))
import math
uniqe_num = len(set(s))
need_to_buy = 4 - uniqe_num
print(need_to_buy)