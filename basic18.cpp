#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << sqrt(pow(a,2)+pow(b,2));
    return 0;
}