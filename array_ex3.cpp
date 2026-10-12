#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    for(int i=0 ; i<10; i++){
        cout << "Input " << i << " : ";
        cin >> arr[i];
    }
    cout << "Element" <<"\t\t" << "Value" << "\t\t" << "Histogram\n";
    for(int i=0; i<10; i++){
        cout << " " << i << "\t\t" << arr[i] << "\t\t";
        for(int j=0;j<arr[i];j++){
            cout << "*";
        }
        cout << "\n";
    }
}