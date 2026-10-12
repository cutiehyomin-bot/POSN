#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << (n*(n-3))/2 << " " << fixed << setprecision(2) << (((n*1.00)-2)*180)/n;
}