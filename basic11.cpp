#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double p,r;
    int t;
    cin >> p >> r >> t;
    cout << fixed << setprecision(2) << p*pow((1+(r/100)),t);
    return 0;
}