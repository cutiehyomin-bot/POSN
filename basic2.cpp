#include <iostream>
using namespace std;
int main(){
    char a,b,c;
    int n;
    cin >> a >> b >> c >> n;
    cout << char(a+n) <<  char(b+n) << char(c+n);
    return 0;
}