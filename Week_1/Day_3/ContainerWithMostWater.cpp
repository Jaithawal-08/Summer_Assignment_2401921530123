class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size()-1;
        int i =0;
        long long area =0;
        long long maxarea=0;
        while(i<=j){
           area= (j-i)*min(height[j],height[i]);
           maxarea=max(maxarea,area);
           if(height[i]<height[j]) i++;
           else j--;
        }
        return maxarea;
    }
};
