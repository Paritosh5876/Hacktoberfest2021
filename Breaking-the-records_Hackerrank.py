import sys
n = int(input().strip())
score = list(map(int, input().strip().split(' ')))
# your code goes here
counx=0
counn=0
mini=score[0]
maxi=score[0]
for a in score:
    if(a>maxi):
        counx+=1
        maxi=a
    elif(a<mini):
        counn+=1
        mini=a
print(counx,counn)
