#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double ss = (a+b+c+d);
    if((a>100)||(a<0))cout << "Invalid input!";
    else if((b>100)||(b<0)) cout << "Invalid input!";
    else if((c>100)||(c<0)) cout << "Invalid input!";
    else if((d>100)||(d<0)) cout << "Invalid input!";
    else cout << fixed << setprecision(2) << ss/4;
    return 0;
}