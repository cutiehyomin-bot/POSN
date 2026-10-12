#include <iostream>
using namespace std;
int main(){
    int s,w;
    cin >> s >> w;
    int cost = 0;
    if(w>5) cost+=15;
    if(s<5) cost+=20;
    else if(s>=5 && s<=10) cost+=35;
    else if(s>10) cost+=50;
    
    cout << cost;
    return 0;
}