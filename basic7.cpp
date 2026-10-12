#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    int thou = m/1000;
    int fivhun = (m%1000) /500;
    int hun = (m%500)/100;
    cout << thou << " " << fivhun << " " << hun;

    return 0;
}