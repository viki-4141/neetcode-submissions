class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int maxArea = 0;
        while(left<right)
        {
            int area = 0;
            if(heights[left]<heights[right])
            {
                area = heights[left]*(right-left);
                left++;
            }
            else if(heights[right]<heights[left])
            {
                area = heights[right]*(right-left);
                right--;
            }
            else
            {
                area = heights[left]*(right-left);
                left++;
            }
            if(area>maxArea)
            {
                maxArea=area;
            }
        }
        return maxArea;
    }
};
