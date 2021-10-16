class Solution {
public:
    int trap(vector<int>&h)
    {
        int n=h.size(),ans=0,lmax=0,rmax=0,l=0,r=n-1;
        while(l<=r)
        {
            if(h[l]<=h[r])
            {
                if(lmax>h[l])
                    ans=ans+lmax-h[l];
                else
                    lmax=h[l];
                l++;
            }
            else
            {
                if(rmax>h[r])
                    ans=ans-h[r]+rmax;
                else
                    rmax=h[r];
                r--;
            }
        }
        return ans;   
    }
};