""" program to print pascalls traiiangle 
example: 
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
1 6 15 20 15 6 1
rows=7"""


def pascal_triangle(size):
    for i in range(0, size):
        for j in range(0, i + 1):
            print(number_for_pattern(i, j),     end=" ")
        print()


def number_for_pattern(n, k):
    num = 1
    if k > n - k:
        k = n - k
    for i in range(0, k):
        num = num * (n - i)
        num = num // (i + 1) #integer result 
    return num

# set rows
rows = int(input())
pascal_triangle(rows)