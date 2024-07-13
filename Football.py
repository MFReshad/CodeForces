n = int(input())
# teams = list(map(str,input().split()))
teams = [input().strip() for _ in range(n)]

def winer_team(teams):
    counter = 0
    num = teams[0]

    for i in teams:
        highest_goal = teams.count(i)
        if(highest_goal>counter):
            counter = highest_goal
            num = i

    return num


print(winer_team(teams))