#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;

    int arr[n];
    int check = 0;
    int count = 0;
    for(int i=1; i<=n; i++){
        int check = 0;
        for(int j = 1; j<=i; j++){
            if(i%j==0) check++;
        }
        if(check==k){
            count++;
            for(int x=0; x<n; x++){
                arr[x] = i;
            }
        } 
    }
    cout << count;
    
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}