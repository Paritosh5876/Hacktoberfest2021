//finding second largest and second smallest element 

#include<stdio.h>

void main(){
	int n,i,j;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){						//array input
	printf("\nEnter an element : ");
	scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(j=i+1; j<n ;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",arr[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",arr[1]);      //Accessing the largest element
}
