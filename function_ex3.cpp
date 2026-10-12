#include <bits/stdc++.h>
using namespace std;
int rectangleArea(int w, int l){
    return w*l;
}
int main(){
    cout << "Enter width : ";
    int width, length;
    cin >> width;
    cout << "Enter length : ";
    cin >> length;
    int ans = rectangleArea(width, length);
    cout << "Area = " << ans;
    return 0;
}