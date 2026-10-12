#include <bits/stdc++.h>
using namespace std;

bool check(int a,int b){
    bool aEven = (a%2==0);
    bool bEven = (b%2==0);
    if(aEven != bEven) return aEven;
    return a<b;
}

int main(){
    vector<int> arr = {5,2,9,1,6,4,3};
    //int c = sizeof(arr)/sizeof(arr[0]);
    sort(arr.begin(),arr.end(),check);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}