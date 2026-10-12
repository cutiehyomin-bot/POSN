#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, s;
    string n;
    cout << "Enter ID: ";
    cin >> i;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter X(0-100): ";
    cin >> s;
    if(s >= 80) cout << "A";
    else if(s >= 70) cout << "B";
    else if(s >= 60) cout << "C";
    else if(s >= 50) cout << "D";
    else cout << "F";

    return 0;
}