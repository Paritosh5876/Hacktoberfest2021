num = 0
tot = 0.0
while True:
    while True:
        number = input("Enter a number : ")
        if number == 'done':
            break
        try :
            num1 = float(number)
        except:
            print('Invalid Input')
            continue
        num = num+1
        tot = tot + num1
        avg = tot / num
    print ('all done')
    print ("Num : ",num)
    print("Total : ",tot)
    print("Average : ",avg)
    print("\n")
