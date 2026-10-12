#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcdef";
    string t = s;
    for(int i=0; i< s.length(); i++){
        s[i] = t[5-i];
    }
    cout << s;
    return 0;
}