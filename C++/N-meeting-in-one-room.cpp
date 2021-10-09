/*
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
Find the maximum number of meetings that can be accomadated in one room.
*/
/*
Time Complexity : O(N*log(N))

*/
#include <iostream>
#include <cstdio>

using namespace std;

int maxMeetings(int start[], int end[], int n)
{
    int count=1;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({end[i],start[i]});
    }
    sort(v.begin(),v.end());
    int temp=v[0].first;
    for(int i=1;i<n;i++){
        if(v[i].second>temp){
            count++;
            temp=v[i].first;
        }
    }
    return count;
    
}

int main() 
{
    int n;
    cin >> n;
    int start[n], end[n];
    for (int i = 0; i < n; i++) 
    cin >> start[i];
    for (int i = 0; i < n; i++) 
    cin >> end[i];
    cout<<maxMeetings(start, end, n);
    return 0;
}  