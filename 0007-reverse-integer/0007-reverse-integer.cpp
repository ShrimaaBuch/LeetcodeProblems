class Solution {
public:
    int reverse(int x) {
        long long r = 0; // Use long long to safely catch overflows
        
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            r = r * 10 + pop;
        }
        
        // Check if it exceeds 32-bit signed integer limits
        if (r > INT_MAX || r < INT_MIN) {
            return 0;
        }
        
        return r;
    }
};