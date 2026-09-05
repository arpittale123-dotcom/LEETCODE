class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0,num=0;
        for(int i=0;i<n;i++){
            if(n%m!=0){
                sum+=i;
            }
        }
        for(int i=0;i<m;i++){
            if(m%n!=0){
                num+=i;
            }
        }
        return sum-num;
        
    }
};
