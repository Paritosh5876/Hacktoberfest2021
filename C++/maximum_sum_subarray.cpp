/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int ovmax = nums[0], currmax=nums[0];
        for(int i=1;i<nums.size();i++){
            currmax=max(currmax+nums[i],nums[i]);
            ovmax=max(ovmax,currmax);
        }
        return ovmax;
}
int main(){
  int n;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++){
    cin>>vec[i];
  }
  cout<<maxSubArray(vec);
  return 0;
}
  
