#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,l;
    cin >> l >> r;

    bool prime[r+1];
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;

    for(int i=2; i*i <=r; i++){
        if(!prime[i]) continue;
        for(int j=i*i; j<=r; j+=i){
            prime[j] = 0;
        }
    }
    string s= "";
    for(int p=2; p*p*p <= r; p++){
        if(!prime[p])continue;
        for(int i = p+1;p*i*i <= r; i++){
            if(!prime[i]) continue;
            for(int j=i+1;p*i*j<=r; j++){
                if(!prime[j]) continue;
                int x=p*i*j;
                if(x>=l) s+=to_string(x);
            }
        }
    }
    cout << s.length()*2;
}