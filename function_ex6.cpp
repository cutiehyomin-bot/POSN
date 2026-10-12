#include <bits/stdc++.h>
using namespace std;
int sumRecursive(int n){
    if(n<=0) return 0;
    n+=sumRecursive(n-1);
    return n;
}
int sumLoop(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int a;
    cin >> a;
    int ansR = sumRecursive(a);
    cout << "Result (Recursion): " << ansR << endl;
    int ansL = sumLoop(a);
    cout << "Result (Loop): " << ansL;
}