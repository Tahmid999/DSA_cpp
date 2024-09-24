class Solution {
public:
    int bitwiseComplement(int n) {

        // special case
        if(n==0){
            return 1;
        }

        int m = n;
        int mask = 0;
        int ans = 0;
        while(m!=0) {
            mask = (mask << 1) |1;
            m = m >> 1;
        }
        ans = (~n) & mask;

        return ans;
    }
};