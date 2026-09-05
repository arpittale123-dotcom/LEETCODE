class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = 0, num = 0;

        for(int i = 1; i <= n; i++) {
            if(i % m != 0) sum += i;   // num1
        }

        for(int i = 1; i <= n; i++) {
            if(i % m == 0) num += i;   // num2
        }

        return sum - num;   // no abs()
    }
};

