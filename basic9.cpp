#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n%10000;
    int b = a/1000;
    int c = (a%1000)/100;
    int d = (a%100)/10;
    cout << b+c+d;
    return 0;
}