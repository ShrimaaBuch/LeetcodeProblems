class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101] = {0};
        int goodPairs = 0;

        for (int num : nums) {
           
            goodPairs += freq[num];
           
            freq[num]++;
        }

        return goodPairs;
    }
};