#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int arr[5] = {7,3,9,2,5};
    int sum = 0;
    for(int i = 0; i<5; i++){
        sum+=arr[i];
    }
    double avg = sum/5.0;
    int max = 0;
    for(int i = 0; i<5; i++){
        if(arr[i]>arr[i+1]) max = arr[i];
    }
    int min = 0;
    for(int i = 0; i<5; i++){
        if(arr[i]>arr[i+1]) min = arr[i+1];
    }
    cout << "sum = " << sum << "\naverage = " << avg << "\nmax = " << max << "\nmin = " << min;
    return 0;
}