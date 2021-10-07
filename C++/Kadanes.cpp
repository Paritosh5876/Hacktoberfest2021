
#include<iostream>
#include<climits>
using namespace std;

int max_sub_arr_sum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}


int main()
{

    cout<<"enter no. of data you want to enter";
    int n;
    cin>>n;
    int a[n];
    cout<<"enter data";
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]=k;
    }
	int max_sum = max_sub_arr_sum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}