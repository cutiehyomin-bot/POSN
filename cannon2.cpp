#include <iostream>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    bool q1 = (x > 0 && y > 0);
    bool q2 = (x < 0 && y > 0);
    bool q3 = (x < 0 && y < 0);
    bool q4 = (x > 0 && y < 0);
    bool o = !(q1||q2||q3||q4); 
    
    cout << q1 << " " << q2 << " "  << q3 << " "  << q4 << " " << o;
    return 0;
}