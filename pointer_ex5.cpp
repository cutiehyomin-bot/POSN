#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    const char *base = n.c_str();
    int count=0;
    for(int i=0; i<n.length(); i++){
        if(*(base+i)==*(base+i+1)) count++;
        else{
            cout << *(base+i) << count+1;
            count=0;
        }
    }\
    return 0;
}
