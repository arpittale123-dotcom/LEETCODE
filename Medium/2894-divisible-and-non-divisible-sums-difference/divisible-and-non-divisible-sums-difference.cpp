class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = 0, num = 0;
        
        for(int i = 1; i <= n; i++) {
            if(i % m != 0) sum += i;
        }
        
        for(int i = 1; i <= m; i++) {
            if(i % n != 0) num += i;
        }
        
        return abs(sum - num);
    }
};

