def r_pyramid(n):
  k = n - 2
  for i in range(n,-1,-1):
    for j in range(k,0,-1):
      print(end = " ")
    k = k + 1
    for j in range(0,i + 1):
      print("* ",end = "")
    print("\r")

while True :
  try:
    a = int(input("Enter a positive Integer : "))
    print("\n")

    if a <= 2:
      print("It's not a valid Integer !")
    else:
      r_pyramid(a)
      print("\n")
  except:
    print("\nIt's not a valid Integer !")
