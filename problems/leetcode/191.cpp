class Solution {
public:
    int hammingWeight(int n) {
        int count_one = 0;

        // checking bit
        while(n!=0) {
            if(n&1 == true){
                count_one++;
            }
            n = n>>1;
        }
        return count_one;
    }
};