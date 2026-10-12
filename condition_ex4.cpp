#include <iostream>
using namespace std;
int main(){
    int m,f;
    cout << "Please enter midterm score : ";
    cin >> m;
    cout << "\nPlease enter final score : ";
    cin >> f;
    int avg = (m+f)/2;
    cout << "\nYour Score = " << avg << "%" << "\n";
    if(avg >=80 && avg <=100) cout << "Grade = G, Good";
    else if(avg >= 50 && avg < 80) cout << "Grade = P, Pass";
    else cout << "Grade = F, Fail";
    return 0;
}