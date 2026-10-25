class Solution {
public:
    int reverse(int x) {
        long long r = 0; 
        
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            r = r * 10 + pop;
        }
        
       
        if (r > INT_MAX || r < INT_MIN) {
            return 0;
        }
        
        return r;
    }
};