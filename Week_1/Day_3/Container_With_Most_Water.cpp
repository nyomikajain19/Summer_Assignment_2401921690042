class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0, maxwater=0;
       int r=height.size()-1;
       while(l<r){
        int width= r-l;
        int h= min(height[l], height[r]);
        maxwater= max(maxwater, width*h);
        if(height[l]<height[r]){
            l++;
        }
        else{
        r--;
        }
    }
       return maxwater;
    }
};