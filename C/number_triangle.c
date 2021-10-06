#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    int i,j,k,l,m,n;    
      
    system("cls");  
    printf("enter the range : ");    
    scanf("%d%d",&m,&n);    
    
    for(i=m;i<=n;i++)    
    {    
        for(j=m-1;j<=n-i;j++)    
        {    
            printf(" ");    
        }    
        for(k=m;k<=i;k++)    
        {    
            printf("%d",k);    
        }    
        for(l=i-1;l>=m;l--)    
        {    
            printf("%d",l);    
        }    
        printf("\n");    
    }    
    return 0;
}
