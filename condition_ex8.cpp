#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Please input area : ";
    cin >> n;
    cout << "Total service costs : ";
    if(n<80) cout << n*1.25 << " baht";
    else if(n>=80 && n<=200) cout << n*10 << " baht";
    else if(n>200 && n<=400) cout << n*7.50 << " baht";
    else cout << n*5 << " baht";
    return 0;
}