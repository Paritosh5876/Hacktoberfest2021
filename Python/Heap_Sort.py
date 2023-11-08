def heapify(arr, n, i): 
    largest = i #Initialize max as root
    l = 2 * i + 1
    r = 2 * i + 2

    //If left child is greater than root
    if l < n and arr[i] < arr[l]:
      largest = l
    
    //If right child is greater than max
    if r < n and arr[largest] < arr[r]:
      largest = r

    //If max is not root
    if largest != i:
      arr[i], arr[largest] = arr[largest], arr[i]
      heapify(arr, n, largest) //heapify the root

//Main function to perform heap sort
def heapSort(arr):
  n = len(arr)

  #Build MaxHeap
  for i in range(n //2, -1, -1):
    heapify(arr, n, i)

  #Extract elements from heap one by one
  for i in range(n - 1, 0, -1): 
    arr[i], arr[0] = arr[0], arr[i]
    heapify(arr, i, 0)

#Driver code
arr = [11, 34, 9, 5, 16, 10] 
n = len(arr) 
print("Original array:") 
for i in range(n):       
    print("%d " % arr[i], end = '')
heapSort(arr) 
print("Sorted array:") 
for i in range(n):       
    print("%d " % arr[i], end = '')
