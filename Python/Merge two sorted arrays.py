# Python program to merge
# two sorted arrays
# with O(1) extra space.

def merge(ar1, ar2, m, n):
	for i in range(n-1, -1, -1):

		last = ar1[m-1]
		j=m-2
		while(j >= 0 and ar1[j] > ar2[i]):
			ar1[j+1] = ar1[j]
			j-=1

		if (j != m-2 or last > ar2[i]):
		
			ar1[j+1] = ar2[i]
			ar2[i] = last


ar1 = [1, 5, 9, 10, 15, 20]
ar2 = [2, 3, 8, 13]
m = len(ar1)
n = len(ar2)

merge(ar1, ar2, m, n)

print("After Merging \nFirst Array:", end="")
for i in range(m):
	print(ar1[i] , " ", end="")

print("\nSecond Array: ", end="")
for i in range(n):
	print(ar2[i] , " ", end="")

