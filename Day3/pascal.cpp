//prblm 26.Remove suplicates from sorted array
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=1,r=1,cur=nums[0];
        while(r<nums.size())
        {
            if(nums[r]!=cur)
            {
                nums[l]=nums[r];
                cur=nums[r];
                l++;
                r++;
            }
            else{
                r++;
            }
        
        }
        return l;
    }
};