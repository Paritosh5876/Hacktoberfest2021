# Array Arithemetic Operations
import numpy as np

optarr1 = np.array([10, 20, 30, 40, 50])
optarr2 = np.array([5, 25, 4, 15, 4])

addarr = np.add(optarr1, optarr2)
subarr = np.subtract(optarr1, optarr2)
multarr = np.multiply(optarr1, optarr2)
modarr = np.mod(optarr1, optarr2)
remainderarr = np.remainder(optarr1, optarr2)
divarr = np.divide(optarr1, optarr2)

print("**The Array Items After Perfroming Arithmetic Operations ***")
print("Array Addition = ", addarr)
print("Array Subtraction = ", subarr)
print("Array Multiplication =  ", multarr)
print("Array Modulus = ", modarr)
print("Array Remainder = ", remainderarr)
print("Array division = ", divarr)
