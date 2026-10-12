#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> p = {
        {3,4},
        {1,1},
        {0,5},
        {-2,2}
    };
    sort(p.begin(),p.end(),[](pair<int,int> a, pair<int,int> b){
        int da = a.first*a.first + a.second*a.second;
        int db = b.first*b.first + b.second*b.second;
        return da < db;
    });
    for(auto i:p){
        cout << "{" << i.first << "," << i.second << "} " ;
    }
    return 0;
}
  

//vector <pair<int,pair<int,int>>>