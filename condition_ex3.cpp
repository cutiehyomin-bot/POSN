#include <iostream>
using namespace std;
int main(){
    int id, s, b;
    cin >> id >> s >> b;
    if((s+b) >= 100000) cout << ((s+b)*1.1);
    else if((s+b) >= 70000) cout << ((s+b)*1.07);
    else if((s+b) >= 50000) cout << ((s+b)*1.05);
    else if((s+b) >= 30000) cout << ((s+b)*1.03);
    else cout << ((s+b)*1.01);
    return 0;
}