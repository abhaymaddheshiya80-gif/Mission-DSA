#include <bits/stdc++.h>
using namespace std;

string larrysArray(vector<int> A) {
    int inv=0;
    for(int i=0;i<A.size();i++)
        for(int j=i+1;j<A.size();j++)
            if(A[i]>A[j]) inv++;
    return (inv%2==0) ? "YES" : "NO";
}

int main(){
    vector<int> A={1,6,5,2,4,3};
    cout << larrysArray(A) << endl;
}
