print("welcome....")

print("press 1 Area of triangle ")
print("press 2 Circumfrence of circle ")
print("press 3 Exit ")
a=int(input())
if a==1:
    wdth=input(print("enter the width  of the triangle "))
    hight=input(print("enter the height  of the triangle "))
    area = 1/2 *int( wdth)*int(hight)
    print(area)
if a==2:
    radius=input(print("enter the radius of tyhe circle "))
    circle=2*3.14*int(radius)
    print(circle)
