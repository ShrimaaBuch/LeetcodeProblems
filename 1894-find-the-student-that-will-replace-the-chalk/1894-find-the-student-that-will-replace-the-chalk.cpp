class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalChalk = 0;
        for (int pieces : chalk) {
            totalChalk += pieces;
        }

        long long rem = static_cast<long long>(k) % totalChalk;

        for (int i = 0; i < static_cast<int>(chalk.size()); ++i) {
            if (rem < chalk[i]) {
                return i;
            }
            rem -= chalk[i];
        }

        return 0; 
    }
};