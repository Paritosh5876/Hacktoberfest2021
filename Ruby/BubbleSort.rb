#Bubble Sort is the simplest sorting algorithm. It works by repeatedly swapping the adjacent elements if they are in wrong order.
#The time Complexity of Bubble Sort algorithm is O(N^2) where N is the number of elements in the array.

def bubbleSort (array, size)
  array.each do
    for j in 0 .. (size-2)
      if array[j] > array[j+1]
        temp = array[j]
        array[j] = array[j+1]
        array[j+1] = temp
      end
    end
  end
  array
end

puts "Please enter numbers separated by spaces:"
s = gets

array = s.split(" ")

print(array)

bubbleSort(array, array.length)

puts("\nAfter sorting: ")

print(array)

#Output
#please enter numbers separated by spaces:
#9
#34
#23
#11
#90
#[9, 34, 23, 11, 90]
#After Sorting:
#[9, 11, 23, 34, 90]


