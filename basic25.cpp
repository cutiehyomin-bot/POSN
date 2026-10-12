#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int room[n][1];
    for(int i=0;i<n;i++){
        cin >> room[i][1];
    }
    int mstart = m;
    for(int x=0;x<n;x++){
        m+=room[x][1];
        if(m>mstart) m = mstart;
        if(m<=0){
            cout << "GAME OVER\n" << x+1;
            return 0;
        }
    }
    if(m>0) cout << "SURVIVED\n" << m;
    return 0;
}