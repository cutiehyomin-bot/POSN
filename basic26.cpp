#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    double r = pow(b,2)-(4*a*c);
    double ans1 = ((-b)+sqrt(r))/(2*a);
    double ans2 = ((-b)-sqrt(r))/(2*a);
    if(r < 0) cout << "No Answer";
    else if(ans1==ans2) cout << fixed << setprecision(2) << ans1;
    else if(ans1 != ans2) cout << fixed << setprecision(2) << ans1 << "\n" << ans2;
    return 0;
}