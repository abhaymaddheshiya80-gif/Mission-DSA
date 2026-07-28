#include <bits/stdc++.h>
using namespace std;

long candies(int n, vector<int> ratings) {
    vector<int> c(n,1);
    for(int i=1;i<n;i++)
        if(ratings[i]>ratings[i-1]) c[i]=c[i-1]+1;
    for(int i=n-2;i>=0;i--)
        if(ratings[i]>ratings[i+1]) c[i]=max(c[i],c[i+1]+1);
    return accumulate(c.begin(),c.end(),0LL);
}

int main(){
    vector<int> ratings = {1,0,2};
    cout << candies(ratings.size(), ratings) << endl;
}
