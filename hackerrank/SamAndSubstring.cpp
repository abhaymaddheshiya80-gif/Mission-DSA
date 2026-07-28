#include <bits/stdc++.h>
using namespace std;
const long MOD=1e9+7;

long substrings(string s) {
    long res=0, f=0;
    for(int i=0;i<s.size();i++){
        f=(f*10 + (s[i]-'0')*(i+1))%MOD;
        res=(res+f)%MOD;
    }
    return res;
}

int main(){
    cout << substrings("972698438521") << endl;
}
