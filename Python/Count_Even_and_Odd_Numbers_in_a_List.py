#Python Program to Count Even and Odd Numbers in a List

NumList = []
Even_count = 0
Odd_count = 0

Number = int(input("Please enter the Total Number of List Elements: "))
for i in range(1, Number + 1):
    value = int(input("Please enter the Value of %d Element : " %i))
    NumList.append(value)

for j in range(Number):
    if(NumList[j] % 2 == 0):
        Even_count = Even_count + 1
    else:
        Odd_count = Odd_count + 1

print("\nTotal Number of Even Numbers in this List =  ", Even_count)
print("Total Number of Odd Numbers in this List = ", Odd_count)
