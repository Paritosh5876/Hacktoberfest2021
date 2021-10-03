def trap():    
        
    left = [0]*n

    right = [0]*n

    s = 0

    left[0] = A[0]
    for i in range( 1, n):
        left[i] = max(left[i-1], A[i])

    right[n-1] = A[n-1]
    for i in range(n-2, -1, -1):
        right[i] = max(right[i + 1], A[i]);

    for i in range(0, n):
        s += min(left[i], right[i]) - A[i]
 
    return s
    
if __name__=='__main__':

    for _ in range(int(input())):

        n = int(input())

        A = list(map(int, input().rstrip().split()))

        print(trap())