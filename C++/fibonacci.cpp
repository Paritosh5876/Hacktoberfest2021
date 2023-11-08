#include <stdio.h>
#include <stdlib.h>

/* A Fibonacci Series: every term is obtained by adding the previous two terms:
0 1 2 3 4 5 6 7 -> 7 terms
0 1 1 2 3 5 8 13 -> fib(7) = 13 */

// Recursive implementation: O(2^n)
int fib_rec(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib_rec(n - 2) + fib_rec(n - 1);
    /* This implementation is O(2^n) because the function calls itself twice.
    It's very space and time consuming and not optimized, since it repeats many calls
    that have already been done (it's an 'excessive recursion') */
}

// Iterative implementation: O(n)
int fib_loop(int n)
{
    int t0 = 0;
    int t1 = 1;
    int s = 0;
    if (n <= 1)
    {
        return n;
    }
    // i is assigned 2 since only n-2 additions will remain
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int F[7]; // Declaring an array that has the length of n (7, for example), initialized in main

// Using memoization to optimize the recursive function: O(n)
int fib_memo(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n-2] == -1)
        {
            F[n-2] = fib_memo(n-2);
        }
        if (F[n-1] == -1)
        {
            F[n-1] = fib_memo(n-1);
        }
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }

}

int main()
{
    printf("%d\n", fib_rec(7));

    printf("%d\n", fib_loop(7));

    for (int i = 0; i < 7; i++)
    {
        // Initializing the array with a non-fibonacci term in order to use memoization
        F[i] = -1;
    }
    printf("%d\n", fib_memo(7));

    return 0;
}