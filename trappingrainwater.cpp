class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int leftm=height[l];
        int rightm=height[r];
        int water=0;
        while(l<r){
            if(leftm<rightm){
                l++;
                leftm=max(leftm,height[l]);
                water+=leftm-height[l];
            }
            else{
                r--;
                rightm=max(rightm,height[r]);
                water+=rightm-height[r];
            }
        }
        return water;
    }
};
