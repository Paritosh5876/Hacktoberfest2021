#include <stdio.h>
#include <string.h>
#include <stdlib.h>
class  word
{   int m,n,l;
	char a[100][100];
	char *s;
	public:
	void input()
	{
		printf("enter rows and column\n");
        scanf("%d %d",&m,&n);
        printf("enter\n");
        for (int i = 0; i <m; ++i)
        {
        	scanf("%s",a[i]);
        }
        printf("enter string to be searched\n");
        scanf("%s",s);
        l=strlen(s);
	}

	int searchpattern()
	{   int c,d=0,b=0,e;
		for (int i = 0; i < m; ++i)
	   	{ 
	   		c=2;
	   		for (int j = 0; j < n; ++j)
	   		{
	   			if(a[i][j]==s[0])
	   	  		{
                    printf("0\n");
	   	  		    if(s[1]==a[(i-1)][(j-1)] && i-1>0 && j-1>0 )
	   	  			{
	   	  			 d=-1;
	   	  			 b=-1;
	   	  			 printf("1\n");
	   	  			}
	   	  			else if(s[1]==a[i-1][j] && i-1>0 )
	   	  			{
	   	  			 d=-1;
	   	  			 b=0;
	   	  			 printf("2\n");
	   	  			}
	   	  			else if(s[1]==a[i-1][j+1] && i-1>0  && j+1<n)
	   	  			{
	   	  			 d=-1;
	   	  			 b=+1;
	   	  			 printf("3\n");
	   	  			}
	   	  			else if(s[1]==a[i][j-1] && j-1>0)
	   	  			{
	   	  			 d=0;
	   	  			 b=-1;
	   	  			 printf("4\n"); 
	   	  			}
	   	  			else if(s[1]==a[i][j+1] && j+1<n )
	   	  			{
	   	  			 d=0;
	   	  			 b=+1;
	   	  			 printf("5\n"); 	   	  			}
	   	  			else if(s[1]==a[i+1][j-1]  && j-1>0 && i+1<m)
	   	  			{
	   	  			 d=+1;
	   	  			 b=-1;
	   	  			 printf("6\n"); 
	   	  			}
	   	  			else if(s[1]==a[i+1][j] && i+1<m)
	   	  			{
	   	  			 d=+1;
	   	  			 b=0;
	   	  			 printf("7\n"); 
	   	  			}
	   	  			else if(s[1]==a[i+1][j+1] && j+1<n && i+1<m)
	   	  			{
	   	  			 d=+1;
	   	  			 b=+1;
	   	  			 printf("8\n"); 
	   	  			}
	   	  			for (int k=2; k < l; ++k)
	   				{   i=i+d;
	   					j=j+b;
	   					if(s[k]==a[i+d][j+b])
	   					{c++;
	   					}
	   				}
	   				if(c==l)
	   				return 0;
                }
            }
        }
	   	if(c!=l)
	   	{
	   	return -1;}
	}
};

int main()
{
word p;
p.input();
int t;
t=p.searchpattern();
if(t==0)
printf("word found\n");
else
 printf("word not found\n");
}
