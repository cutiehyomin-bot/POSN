#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    for(int i=0; i+1 < n.length(); i++){
        if(i+1 < n.length() && n[i]==n[i+1]){
            n.erase(i,1);
            n.erase(i+1,1);
        }
        else if(n[i]!=n[i+1]) cout << n[i];
    }
    cout << n;
}