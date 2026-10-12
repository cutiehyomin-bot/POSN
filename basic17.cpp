#include <iostream>
using namespace std;
int main(){
    char a,b;
    cin >> a >> b;
    if(char(a) >= char(b)) cout << char(a)-char(b);
    else cout << char(b)-char(a);
    return 0;
}