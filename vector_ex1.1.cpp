#include <bits/stdc++.h>
using namespace std;
bool com(string a,string b){
    return a.size() < b.size();
}
int main(){
    string a[] = {"apple","cat","banana","dog","elephant"};
    int c = sizeof(a)/sizeof(a[0]);
    sort(a,a+c,com);
    for(int f=0; f<c;f++){
        cout << a[f] << " ";
    }
    return 0;
}