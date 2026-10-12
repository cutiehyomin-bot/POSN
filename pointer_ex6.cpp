#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array before sorting:\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int *p = arr; 
    cout << "Array after sorting:\n";
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(*(p+j) > *(p+j+1)){
                int x = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = x;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << *(p+i) << " ";
    }
    return 0;
}
