#include <bits/stdc++.h>
using namespace std;
int main(){
    double h, w;
    cin >> h >>w;
    double h2 = h/100.0;
    cout << fixed << setprecision(2) << w/(h2*h2);
}