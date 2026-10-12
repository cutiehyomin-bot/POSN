#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int count = 1;
    for(int i=0; i < n.length(); i++){
        if(i+1 < n.length() && n[i]==n[i+1]) count++;
        else{
            cout << n[i] << count;
            count = 1;
        }
    }
    return 0;
}