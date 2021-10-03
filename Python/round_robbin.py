teams=['t1','t2','t3','t4','t5','t6','t7','t8']
from random import shuffle
def create_fixture(teams,h_and_a):
    if len(teams) % 2:
        teams.append('Day off')
    n = len(teams)
    matchs = []
    fixtures = []
    return_matchs = []
    for fixture in range(1, n):
        for i in range(int(n/2)):
            if fixture%2!=0 and not h_and_a:
                matchs.append({'team1':teams[n - 1 - i],'team2': teams[i]})
            else:
                matchs.append({'team1':teams[i],'team2': teams[n - 1 - i]})
            if h_and_a:
                return_matchs.append({'team1':teams[n - 1 - i],'team2': teams[i]})
        teams.insert(1, teams.pop())
        fixtures.insert(len(fixtures)//2, matchs)
        if return_matchs:
            fixtures.append(return_matchs)
        matchs = []
        return_matchs = []
    return fixtures

print(create_fixture(teams,True))