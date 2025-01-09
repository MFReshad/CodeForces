n = int(input().strip())

if n > 0:
    print(n)

else:
    num = str(n)

    remove_last = int(num[:-1]) #remove last digit
    remove_2nd_last = int(num[:len(num)-2] + num[len(num)-1:]) # remove 2nd last

    max_num = max(remove_last, remove_2nd_last)

    print(max_num)
