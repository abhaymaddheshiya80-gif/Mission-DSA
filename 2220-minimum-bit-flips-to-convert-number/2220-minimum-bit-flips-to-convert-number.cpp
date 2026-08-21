class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff_bits=start^goal;
        int count=0;
        while(diff_bits>0)
        {
            if(diff_bits%2==1)
            {
                count++;
            }
            diff_bits=diff_bits/2;
        }
        return count;
    }
};