"""Right Arrow"""
def main():
    """Main Function"""
    k_num = int(input())
    n_num = int(input())
    for i in range(n_num//2+1):
        print(" " * (i), end="")
        print("*" * k_num)
    for j in range(n_num//2):
        print(" " * (n_num//2-1-j), end="")
        print("*" * k_num)
main()
