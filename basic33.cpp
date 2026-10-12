#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    if(n==1) cin >> k;

    if(n==1){
        for(int i=0; i<s.length(); i++){
            s[i] = char(s[i+k]);
        }
    }
    cout << s;

    if (n==2){
        for(int i=0; i<s.length(); i++){
            if(s[i]<=char(90)){
                int x=i-65;
                s[i] = char(90-x);
            }
            else if(s[i]>=char(97)){
                int y=i-97;
                s[i] = char(122-y);
            }
        }
    cout << s;
    }
}