#include <bits/stdc++.h>
using namespace std;

string organizeData(string s) {
    string letters = "";
    string numbers = "";
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            letters += s[i];
        } else if(s[i] >= '0' && s[i] <= '9') {
            numbers += s[i];
        }
    }
    return letters + numbers;
}
