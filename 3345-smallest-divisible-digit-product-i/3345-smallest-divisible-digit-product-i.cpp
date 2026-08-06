class Solution {
public:
    int digit_product(int n){
        int pro=1;
        while(n!=0)
        {
            pro=pro*(n%10);
            n=n/10;
        }
        return pro;

    }
    int smallestNumber(int n, int t) {
        while(true)
        {
            int res=digit_product(n);
            if(res%t==0)
            {
                return n;
            }
            else{
                n++;
            }
        }
        return 0;
    }
};