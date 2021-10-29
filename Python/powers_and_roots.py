import math

def power_funcs(number, power, power_or_root):
    for i in power:
        if not i.isdigit() and i != '-' and i != '+':
            print("You cannot use special signs or letter. Only number, + and - are allowed.")
            return None
    first_loop = True
    for i in number:
        if not i.isdigit() or i == '+' or i == '-':
            if first_loop is True:
                first_loop = False
                if i == '-' and power_or_root == "root":
                    if float(power) % 2 == 1:
                        continue
                    else:
                        print("Even powers don't have negative roots.")
                        return None
                else:
                    print(f"You can't use '{i}' like that")
                    return None

            else:
                print(f"This function OBVIOUSLY does not allow alphabets and special characters.\n'{i}' comes under that category.")
                return None
    if power_or_root == "power":
        try:
            ans = round(math.pow(float(number), float(power)), 3)
        except OverflowError:
            print(f"The answer is TOO BIG. Please try a smaller number")
            return None
    elif power_or_root == "root":
        ans = round(math.pow(float(number), 1 / float(power)), 3)
    if ans.is_integer() is True and not('e' in str(ans)):
        return int(ans)
    return ans


power_or_root = input("Do you want a power or a root?\n")
if power_or_root.lower() == 'power' or power_or_root.lower() == 'root':
    number = input("Please enter the base.\n")
    power = input("Please enter the power/root.\n")
    ans = power_funcs(number=number, power=power, power_or_root=power_or_root)
    if ans is None:
        print("Sorry could not find the answer")
    else:
        print(f"{ans} is the answer")

else:
    print("You can only choose power or root")