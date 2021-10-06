import sys

if(len(sys.argv) == 2 and sys.argv[1]=='-h'):
    print("-h number   Print this Help")
    print("-hex number To Convert Decimal To Hexadecimal")
    print("-b number   To Convert Decimal To Binary")
    print("-o number  TO Convert Decimal To Octal")
    quit()
elif(len(sys.argv) == 3 and sys.argv[1]=='-hex'):
    alphabet = '0123456789ABCDEF'
    newMessage = ''
    key =16
elif(len(sys.argv) == 3 and sys.argv[1]=='-b'):
    alphabet = '01'
    newMessage = ''
    key =2
elif(len(sys.argv) == 3 and sys.argv[1]=='-o'):
    alphabet = '01234567'
    newMessage = ''
    key =8
else:
    print("A Valid argument is required run with -h argument for details")
    quit()
message = int(sys.argv[2])
while (message>0):
 newPosition = message%key
 newCharacter = alphabet[newPosition]
 newMessage += newCharacter
 message=message//key
print('answer is ',newMessage[::-1])
