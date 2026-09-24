class Solution {
public:
    int digitSum(int n){
        int sum=0;
        while(n!=0){
            sum=sum+n%10;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
        int digit;
        int n=nums.size();
        int flag=0;
        for(int i=0;i<n;i++){
            digit=digitSum(nums[i]);
            if(digit==i)
            {
                flag=1;
             mini=min(digit,mini);
            }
        }
        if(flag==0)
        {
            return -1;
        }
        return mini;
    }
};