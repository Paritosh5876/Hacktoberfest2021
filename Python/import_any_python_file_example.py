## Suppose I want to import another python file and it's function simply it with the file name and use the function directly

import BubbleSort

arr = input()   # Example: 2 3 4 5

array = list(map(int,arr.split(' '))) 

print(BubbleSort.bubble_sort(array))



