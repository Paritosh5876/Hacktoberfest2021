#include<stdio.h>

void main(){
	int n,i,j=0;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){						//array input
		printf("\nEnter an element : ");
		scanf("%d",&arr[i]);
	}
	
	for(i=n-1;i>=n/2;i--){					//array reversal
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j++;
	}
	printf("\nArray after reversal : \n");
	for(i=0;i<n;i++){
		printf("\n%d",arr[i]);
	}
}