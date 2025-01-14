t = int(input().strip())

while t:
    t -= 1
    div = int(input().strip())

    if div >= 1900:
        print("Division 1")
    elif 1899 >= div >= 1600:
        print("Division 2")
    elif 1599 >= div >= 1400:
        print("Division 3")
    elif 1399 >= div :
        print("Division 4")