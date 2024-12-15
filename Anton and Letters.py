input_str = input().strip()
list = input_str.strip("{}").split(", ")
set = set(list)

print(0 if set=={''} else len(set))
