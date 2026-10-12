#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long arr[9];
    for(int i =0; i<9; i++){
        cin >> arr[i];
    }
    sort(arr, arr+9);
    long long sumx= 0;
    long long sump= 0;

    for(int i=0; i<=4;i++){
        sump+= arr[i];
    }
    for(int i=4; i<=8; i++){
        sumx+= arr[i];
    }
    cout << sumx-sump << "\n";

    return 0;
}