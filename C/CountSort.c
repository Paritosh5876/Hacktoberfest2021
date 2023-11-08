// Count Sort Algorithm using C

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int maximum(int arr[], int n){
    int max = INT_MIN;
    for (int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void count_sort(int arr[], int n){
   // Find the maximum element in array 
    int max = maximum(arr, n);
    int i, j;
    int * count = (int * ) malloc((max+1)*sizeof(int));

        // Initialize the array element to zero
    for (i=0; i<max+1; i++){
        count[i] = 0;
    }
        // Increment the corresponding index in count array
    for (i=0; i<n; i++){
        count[arr[i]] += 1;
    }

    i = 0; //Counter for count array
    j = 0; //Counter for given array

    while(i<=max){
        if(count[i]>0){
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    }


}

int main()
{
    int arr[] = {21, 15, 76, 4, 5, 2, 2, 29, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array\n");
    print_array(arr, n);

    count_sort(arr, n);

    printf("\n\nSorted Array\n");
    print_array(arr, n);

    return 0;
}
