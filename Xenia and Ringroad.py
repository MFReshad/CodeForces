n, m = map(int , input().strip().split())
list = list(map(int , input().strip().split()))

time = 0

for i in range(len(list)):
    if i ==0:     
        time += list[i]-1
        temp = list[i]

    
    elif list[i]<temp:        
        time += n - temp + 1 + list[i]-1
        temp = list[i]


    elif list[i]== temp :
        temp = list[i]


    else:  
        time += list[i]-temp
        temp = list[i]

              
print(time)
        
    
    

    