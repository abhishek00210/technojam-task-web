class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int max=(j-i)*min(height[i],height[j]);
        while(i<j)
        {
            if((j-i)*min(height[i],height[j])>max)
            {
                max=(j-i)*min(height[i],height[j]);
            }
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return max;
    }
};