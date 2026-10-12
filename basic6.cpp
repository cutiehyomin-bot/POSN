#include <iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    int min = s/60;
    int hour = min/60;
    int minFin = min-(hour*60);
    int sec = s - (hour*3600) - (minFin*60);
    cout << hour << " " << minFin << " " << sec;
    return 0;
}