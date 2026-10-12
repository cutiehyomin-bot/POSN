#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin >> n >> m;
    map<int,int> count;
    long long total=0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        count[x]++;
    }
    for(auto const& [num,round] : count ){
        if(round%2!=0){
            total+=1;
        }
    }
    long long ans = total*m;
    cout << ans;
    return 0;
}