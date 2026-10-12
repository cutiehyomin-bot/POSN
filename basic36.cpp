#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==1 && b==1 && c==1) cout << "IMPOSSIBLE";
    else if(a==-1 && b==-1 && c==-1) cout << "IMPOSSIBLE";
    else if(a==0 && b==0 && c==0) cout << "A";
    else if(a==1 && b==0 && c==1) cout << "B";
    else if(a==0 && b==1 && c==0) cout << "C";

    else if(a==-1 || b==-1 || c==-1){
        if(a==-1){
            if(b+c==2) cout << "IMPOSSIBLE";
            else if(b+c==-2 || b+c==-1) cout << "AMBIGUOUS";
            else if(b==0 && c==0) cout << "A";
            else if(b==0 && b==-1) cout << "B";
            else if(c==1) cout << "C";
        }
        else if(b==-1){
            if((a+b==0 && a==0) || (a+b==-1)) cout << "AMBIGUOUS";
            else if(a+b==2 || a+b==0) cout << "B";
            else if(a+b==1) cout << "IMPOSSIBLE";
        }
        else if(c==-1){
            if(a+b==0) cout << "A";
            else if(a+b==2) cout << "IMPOSSIBLE";
            else if(a==1 && b==0) cout << "B";
            else if(a==0 && b==1) cout << "C";
        }
    }

    return 0;
}