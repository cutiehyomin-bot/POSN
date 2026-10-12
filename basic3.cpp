#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double score1, credit1, score2, credit2, score3, credit3;
    cin >> score1 >> credit1 >> score2 >> credit2 >> score3 >> credit3;
    cout << fixed << setprecision(2) << ((score1*credit1)+(score2*credit2)+(score3*credit3))/(credit1 + credit2 + credit3);
    return 0;
}