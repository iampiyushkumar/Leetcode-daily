//LEETCODE 1671 HARD   MINIMUM REMOVALS TO MAKE MOUNTAIN ARRAY FIRST SOLVE LIS
class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        //mai pahle longest increasing subsequence nikal leta hu
        int n=nums.size();
        vector<int>dpmaxi(n,1);
        vector<int>temp=nums;
       for(int i=1;i<n;i++)
        {
           for(int j=0;j<i;j++)
           {
              if(nums[j]<nums[i])
                { 
                    dpmaxi[i]=max(dpmaxi[i],dpmaxi[j]+1);
                }
           }
        }
        vector<int>dpmini(n,1);
       for (int i = n - 2; i >= 0; i--) 
       { for (int j = n - 1; j > i; j--)
            {
                if (nums[j] < nums[i])
                 dpmini[i] = max(dpmini[i], dpmini[j] + 1);         
            }
        }
      int maxmntlen=0;
      for(int i=0;i<n;i++)
      {
        if(dpmaxi[i]>1&&dpmini[i]>1)
        {
          int  mntlen=dpmaxi[i]+dpmini[i]-1;
            maxmntlen=max(maxmntlen,mntlen);
        }
      }
      return n-maxmntlen;
    }
};
