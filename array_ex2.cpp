#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i =0 ; i<10; i++){
        cout << "Input " << i << " : ";
        cin >> arr[i];
    }
    cout << "Element" <<"\t\t" << "value\n";
    for(int i=0; i<10; i++){
        cout << " " << i << "\t\t" << arr[i] << endl;
    }
}