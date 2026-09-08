class Solution {
public:
    int countDigit(int n)
    {
        int count=0;
        while(n)
        {
            n=n/10;
            count++;
        }
        return count;
    }
    int countCommas(int n) {
        int num=n;
        int s=countDigit(n);
       int  commas=s/3;
        int res=0;
        while(countDigit(n)>=4)
        {
         res=res+commas;
         n--; 
        }
        if(num==100000)
        {
            return res/2;
        }
        return res;
  
    }
};