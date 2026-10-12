#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n/3600 << " hr " << n%3600/60 << " min " << n%3600%60 << " sec ";
    return 0;
}