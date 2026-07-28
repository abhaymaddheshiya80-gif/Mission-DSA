#include <bits/stdc++.h>
using namespace std;

vector<int> largestPermutation(int k, vector<int> arr) {
    int n=arr.size();
    unordered_map<int,int> pos;
    for(int i=0;i<n;i++) pos[arr[i]]=i;
    for(int i=0;i<n && k>0;i++){
        int correct=n-i;
        if(arr[i]!=correct){
            int idx=pos[correct];
            swap(arr[i],arr[idx]);
            pos[arr[idx]]=idx;
            pos[arr[i]]=i;
            k--;
        }
    }
    return arr;
}

int main(){
    vector<int> arr={4,2,3,5,1};
    int k=1;
    auto res=largestPermutation(k,arr);
    for(int x:res) cout<<x<<" ";
}
