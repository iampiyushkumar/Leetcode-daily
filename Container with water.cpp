class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int left=0;
        int right=n-1;
        while(right>left)
        {
            area=max(area,min(height[left],height[right])*(right-left));
            if(height[right]>height[left])
                 left++;
            else
            right--;
        }
        return area;
    }
};
