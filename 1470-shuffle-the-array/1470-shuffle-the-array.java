class Solution {
    public int[] shuffle(int[] nums, int n) {
         int[] result = new int[2 * n];

        int l = 0;
        int r = n;
        int index = 0;

        while (l < n) {
            result[index] = nums[l];
            index++;
            l++;

            result[index] = nums[r];
            index++;
            r++;
        }

        return result; 
    }
}