#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int r,n;
    cout << "Please input radius : ";
    cin >> r;
    cout << "Calculator Menu : \n          1.Find area\n          2.Find circumference";
    cout << "\nChoose menu : ";
    cin >> n;
    if(n==1) cout << "Area = " << fixed << setprecision(2) << 3.14*pow(r,2);
    else if(n==2) cout << "Circumference = " << fixed << setprecision(2) << 2*3.14*r;
    return 0;
}