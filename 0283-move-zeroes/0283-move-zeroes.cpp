class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writePos = 0;

        for (int readPos = 0; readPos < static_cast<int>(nums.size()); ++readPos) {
            if (nums[readPos] != 0) {
                nums[writePos++] = nums[readPos];
            }
        }

        
        while (writePos < static_cast<int>(nums.size())) {
            nums[writePos++] = 0;
        }
    }
};