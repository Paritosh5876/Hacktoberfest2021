/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */
#include<limits.h>
int arr[10];
int* cutSticks(int lengths_size, int *lengths, int *result_size) 
{
  int i,j,min;
  for(i=0;i<lengths_size;i++)
  {
    min=INT_MAX;
    int count=0;
    for(j=0;j<lengths_size;j++)
    {
      if(min>lengths[j] && lengths[j]!=0)
      {
      min=lengths[j];
      }
      }
    for(j=0;j<lengths_size;j++)
    {
      if(lengths[j]!=0)
      {
         lengths[j]=lengths[j]-min;
        count++;
      }
    }
    
    if(count>0)
    {
  arr[*result_size]=count;
    (*result_size)++;
    }
    
  }
  return arr;
  

}

