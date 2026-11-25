#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        freq.reserve(arr.size());

        for (int num : arr) {
            ++freq[num];
        }

        unordered_set<int> seenCounts;
        seenCounts.reserve(freq.size());

        for (const auto& [val, count] : freq) {
            if (!seenCounts.insert(count).second) {
                return false;
            }
        }

        return true;
    }
};