#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int x,y;
    cin >> x >> y;
    string s;
    cin >> s;
    int cu, cd, cr, cl;
    cin >> cu >> cd >> cr >> cl;
    int x1 = x;
    int y1 = y;

    for(int i=0; i< s.length() ; i++){
        if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else if(s[i]=='R') x++;
        else if(s[i]=='L') x--;
    }
    int e=0;
    
    if((x<n && y<m)) cout << x << " " << y;
    else cout << "GG";
}
/*
5 5
2 2
UDRRLD
10 5 20 1
*/