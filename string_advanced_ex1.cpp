#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,r;
    cin >> x >> y;
    cin >> r;
    string s;
    cin >> s;

    int rxr = x+r;
    int rxl = x-r;
    int ryu = y+r;
    int ryd = y-r;
    for(int i=0; i< s.length(); i++){
        if(s[i]=='W') y++;
        else if(s[i]=='S') y--;
        else if(s[i]=='A') x--;
        else if(s[i]=='D') x++;
    }
    if(x> rxr|| x< rxl || y> ryu|| y< ryd) cout << "SAVE";
    else cout << "DEAD";
    return 0;
}