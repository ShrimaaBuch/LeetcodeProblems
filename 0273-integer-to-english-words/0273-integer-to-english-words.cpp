#include <string>
#include <vector>

using namespace std;

class Solution {
private:
    const vector<string> belowTwenty = {
        "", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };

    const vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty",
        "Sixty", "Seventy", "Eighty", "Ninety"
    };

    const vector<string> thousands = {
        "", "Thousand", "Million", "Billion"
    };

    string helper(int num) {
        if (num == 0) {
            return "";
        }
        if (num < 20) {
            return belowTwenty[num] + " ";
        }
        if (num < 100) {
            return tens[num / 10] + " " + helper(num % 10);
        }
        return belowTwenty[num / 100] + " Hundred " + helper(num % 100);
    }

public:
    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }

        string result;
        int groupIndex = 0;

        while (num > 0) {
            int chunk = num % 1000;
            if (chunk != 0) {
                string chunkWords = helper(chunk);
                result = chunkWords +
                         (thousands[groupIndex].empty() ? "" : thousands[groupIndex] + " ") +
                         result;
            }
            num /= 1000;
            groupIndex++;
        }

        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};