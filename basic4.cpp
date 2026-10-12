#include <iostream>
using namespace std;
int main(){
    int p, s, n;
    cin >> p >> s >> n;
    int ans = (p*s)/n;
    int r = (p*s)%n;
    cout << ans << " " << r;
    return 0;
}