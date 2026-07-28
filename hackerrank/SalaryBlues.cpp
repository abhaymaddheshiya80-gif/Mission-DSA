#include <bits/stdc++.h>
using namespace std;

int salaryBlues(vector<int> arr) {
    int g=arr[0];
    for(int i=1;i<arr.size();i++) g=__gcd(g,arr[i]);
    return g;
}

int main(){
    vector<int> arr={12,15,21};
    cout << salaryBlues(arr) << endl;
}
