//link to the problem : https://leetcode.com/problems/majority-element/
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.

//Example : nums = [2,2,1,1,1,2,2] output -> 2
//here 2 occurs more than n/2 times

//Approach : 
//Naive 1 : Since the question asks us to calculate the majority element so the majority element will occur more than
//n / 2 times . So we simply sort the array and output the element at n/2 index.
//Time complexity : O(nlogn) n -> size of array
//Space complexity : O(1);

//2 Approach : We can mantain a map of element and it count in a hashmap.
//Time Complexity : O(n);
//Space Complexity : O(n); because of hashmap

//3 Approach : Moore Voting Algo
//Start with first element as candidate for majority element if next element is same as prev increment count and if
//different decrement count .if count becomes zero change the candidate to nums[i] in that case.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int majElement = majorityElement(nums);
    cout << majElement << endl;
}

int majorityElement(vector<int>& nums) {
        int maj_index = 0, count = 1;
        int size = nums.size();
        for (int i = 1; i < size; i++) 
        {
            if (nums[maj_index] == nums[i])
                count++;
            else
                count--;
            if (count == 0) 
            {
                maj_index = i;
                count = 1;
            }
        }
    return nums[maj_index];
}