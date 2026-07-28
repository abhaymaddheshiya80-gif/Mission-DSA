#include <bits/stdc++.h>
using namespace std;

// Example: check if array can be partitioned into consecutive subsequences
bool canPartition(vector<int>& nums) {
    unordered_map<int,int> freq, need;
    for(int x: nums) freq[x]++;
    for(int x: nums){
        if(freq[x]==0) continue;
        if(need[x]>0){
            need[x]--;
            need[x+1]++;
        } else if(freq[x+1]>0 && freq[x+2]>0){
            freq[x+1]--; freq[x+2]--;
            need[x+3]++;
        } else return false;
        freq[x]--;
    }
    return true;
}

int main(){
    vector<int> nums = {1,2,3,3,4,5};
    cout << (canPartition(nums) ? "YES" : "NO") << endl;
}
