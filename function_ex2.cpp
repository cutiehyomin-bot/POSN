#include <bits/stdc++.h>
using namespace std;
void checkEvenOdd(int number){
    if(number%2==0) cout << "Even Number";
    else cout << "Odd Number";
}

int main(){
    cout << "Enter number : ";
    int a;
    cin >> a;
    checkEvenOdd(a);
    return 0;
}

