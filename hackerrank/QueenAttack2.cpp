#include <bits/stdc++.h>
using namespace std;

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    set<pair<int,int>> obs;
    for(auto &o: obstacles) obs.insert({o[0],o[1]});
    int moves=0;
    vector<pair<int,int>> dirs={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    for(auto d:dirs){
        int r=r_q+d.first, c=c_q+d.second;
        while(r>=1 && r<=n && c>=1 && c<=n && !obs.count({r,c})){
            moves++; r+=d.first; c+=d.second;
        }
    }
    return moves;
}

int main(){
    int n=5,k=3;
    int r_q=4,c_q=3;
    vector<vector<int>> obstacles={{5,5},{4,2},{2,3}};
    cout << queensAttack(n,k,r_q,c_q,obstacles) << endl;
}
