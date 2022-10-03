#Password Generator Project
import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("Welcome to the PyPassword Generator!")
nr_letters= int(input("How many letters would you like in your password?\n")) 
nr_symbols = int(input(f"How many symbols would you like?\n"))
nr_numbers = int(input(f"How many numbers would you like?\n"))

list1 =['']
for letters_choose in range(1,nr_letters+1):
 a = random.choice(letters)
 list1.append(a)

list2 = ['']
for numbers_choose in range(1,nr_numbers+1):
 b = random.choice(numbers)
 list2.append(b)

list3 = ['']
for symbols_choose in range(1,nr_symbols+1):
 c = random.choice(symbols)
 list3.append(c)

listfinal = list1 + list2 + list3
random.shuffle(listfinal)
print(*listfinal, sep='')
