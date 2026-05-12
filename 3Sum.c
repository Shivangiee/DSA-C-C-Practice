class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int idx=0; idx<n;idx++)
        {
            if(idx>0 && nums[idx]==nums[idx-1])
            continue;

            int i=idx+1;
            int k=n-1;
            while(i<k)
            {
                int sum= nums[idx]+nums[i]+nums[k];
                if(sum<0)
                {
                    i++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    vector<int>store={nums[idx],nums[i],nums[k]};
                    result.push_back(store);
                    i++;
                    k--;

                    while(i<k && nums[i]==nums[i-1]) i++;
                    while(i<k && nums[k]==nums[k-1]) k--;
                }
            }
        }
        return result;
    }
};