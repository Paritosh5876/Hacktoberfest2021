#*****MAGIC 8 BALL CODE*****
import sys
import random

ans = True

while ans:
       question = input("ask the magic 8 ball a question: (press enter to quit) ")

       answers = random.randint(1,10)

       if question == "":
           sys.exit()

       elif answers == 1:
           print ("Good:)")

       elif answers == 2:
           print ("Certainly:)")

       elif answers == 3:
           print ("You may rely on it:)")

       elif answers == 4:
           print ("Ask again later:)")

       elif answers == 5:
           print ("Concentrate and ask again:)")

       elif answers == 6:
           print ("Vague, try again:)")

       elif answers == 7:
           print ("Nope:( If that's what you were looking for then, Kudos:)")

       elif answers == 8:
           print ("Oops, it's a No:( If that's what you were looking for then, Kudos:)")
       #just made this an MAGIC 10 Ball
       elif answers == 9:
           print ("If you believe in yourself, you just might get the answers yourself :D")
       
       elif answers == 10:
           print ("What if I said I don't want to tell you, coz you might not want to hear it")
