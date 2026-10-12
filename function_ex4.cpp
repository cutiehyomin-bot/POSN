#include<bits/stdc++.h>
using namespace std;
double areaRectangle(double w ,double l = 10){
    double area;
    area = w*l;
    return area;
}
int main(){
    int x = 5;
    int y = 8;
    cout << "width = " << x << "\n";
    cout << "length = " << y << "\n";
    cout << "Area = " << areaRectangle(5,8) << "\n";

    int z = 7;
    cout << "width = " << z << "\n";
    cout << "length = " << "10 (default)\n";
    cout << "Area = " << areaRectangle(z);


    
}