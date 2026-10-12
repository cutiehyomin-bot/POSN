#include <iostream>
using namespace std;
int eliminate(string s) {
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]) {
            s.erase(i,2);
        }
    }
    int ans = s.length();
    return ans;
}