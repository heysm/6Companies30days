class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int n=nums.size();
        int j=0,ans=0,p=1,i=0;
        while(i<n || j<n)
        {
            i=max(i,j);
            p=max(p,1);
            if(i<n && p*nums[i]<k)
            {
                p=p*nums[i];
                i++;
                ans++;
                
            }
            else if(j<n)
            {
                p=p/nums[j];
                j++;
                if(p<k && j<i)
                    ans+=(i-j);
            }
        }
        return ans;

    }
};
