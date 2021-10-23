# initializing list
test_list = [345, 893, 1948, 34, 2346]

# printing original list
print("The original list is : " + str(test_list))

# initializing K
K = 3

res = []
for ele in test_list:

	# joining using join(),
	if list(set(str(ele)))[0] == str(K) and len(set(str(ele))) == 1:
		res.append('')
	else:
		res.append(int(''.join([el for el in str(ele) if int(el) != K])))

# printing result
print("Modified List : " + str(res))
