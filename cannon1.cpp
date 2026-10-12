#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double x0,y0,vx,vy,t;
    cin >> x0 >> y0 >> vx >> vy >> t;
    cout << fixed << setprecision(2) << x0 + (vx*t) << " " << y0 + (vy*t) - (0.5*9.8*(pow(t,2)));
}