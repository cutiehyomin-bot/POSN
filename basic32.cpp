#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    //string count[n];
    int c=0;
    int a=0;
    for(int i=n;i<=m;i++){
        for(int j=1; j<=i; j++){
            if(i%j==0) c++;
        }
        if(c==3)a++;
    }
    cout << a;

    return 0;
}