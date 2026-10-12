#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin >>a >> b >> c >> d >> e;
    int odd=0, even=0;
    if(a%2==0) even++;
    else odd++;
    if(b%2==0) even++;
    else odd++;
    if(c%2==0) even++;
    else odd++;
    if(d%2==0) even++;
    else odd++;
    if(e%2==0) even++;
    else odd++;
    cout << "Even = " << even << " " << "Odd = " << odd;
    return 0;
}