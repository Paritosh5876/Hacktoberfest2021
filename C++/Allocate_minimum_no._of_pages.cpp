#include<bits/stdc++.h>
using namespace std;

bool ispossible(int arr[], int n, int m, int curr_min)
{
  int studentsrequired=1;
  int curr_Sum=0;
  
  for(int i=0; i<n; i++)
  {
    if(arr[i]>curr_min)
      return false;
    if(curr_sum + arr[i]> curr_min)
    {
      studentsrequired++;
      curr_sum=arr[i];
      if(studentsrequired>m)}
        return false;              
    }
   else
    current_sum+=arr[i];
  }
return true;
}

int findpages(int arr[],int n, int m)
{
  long long sum=0;
  if(n<m)
    return -1;
  for(int i=0; i<n; i++)
    sum+=arr[i];
  int start=0, end=sum;
  int result=INT_MAX;
  while(start<=end)
  {
    int mid=(start+end)/2;
    if(ispaossible(arr,n,m,mid))
    {
      result=mid;
      end=mid-1;
    }
    else
      start=mid+1;
  }
  return result;
}

int main()
{
    int arr[] = {12, 34, 67, 90};
    int n = sizeof arr / sizeof arr[0];
    int m = 2; 
 
    cout << "Minimum number of pages = "
         << findPages(arr, n, m) << endl;
    return 0;
}
