/*Print Floyd's Triangle.
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k=1,j;
    for( i=5;i>0;i--)
    {
        for(int j=i;j<5;j++)
        {
            printf(" %d",k);
            k++;
        }
        printf("\n");

    }
return 0;
}
