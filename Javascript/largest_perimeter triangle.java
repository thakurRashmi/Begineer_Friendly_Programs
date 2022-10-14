import java.util.Arrays;

// Given an integer array nums, return the largest perimeter of a triangle with a 
// non-zero area, formed from three of these lengths. If it is impossible to form 
// any triangle of a non-zero area, return 0.

class Solution {
    public int largestPerimeter(int[] nums) {
        Arrays.sort(nums); // 1 2 3 4 5 6
        
        for(int i = nums.length - 3; i >= 0; i--){ // 4   5    6  -> 3 4 5
                                                // i  i+1  i+2
            if(nums[i] + nums[i+1] > nums[i+2])
                return nums[i] + nums[i+1] + nums[i+2];
        }
        
        return 0;
    }
}