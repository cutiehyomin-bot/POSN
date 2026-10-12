#include <iostream>
using namespace std;
int main(){
    int h1,m1,h2,m2;
    cin >> h1>> m1 >> h2 >> m2;
    int ans = ((h2*60)+m2)-((h1*60)+m1);
    int ansfin = (ans+59)/60;
    cout << ansfin*30;
    return 0;
}