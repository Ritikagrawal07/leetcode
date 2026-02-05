class Solution {
public:
    int maxArea(vector<int>& height) {
      //sort(height.begin() , height.end());

      int left = 0 ; int right = height.size()-1;
         int maxarea = 0 ;
      while(left < right){

        int width = right - left;

        int area = min(height[left],height[right]) * (right-left);

        maxarea = max(area,maxarea);


        if(height[left]  < height[right]){
            left++;
        }else right--;
      }
      return maxarea;
    }
};