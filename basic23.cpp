#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b && (c%2==0)) cout << "OPEN";
    else cout << "CLOSED";
}