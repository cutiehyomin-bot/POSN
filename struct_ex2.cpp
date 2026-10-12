#include <bits/stdc++.h>
using namespace std;

struct athelete {
    string name;
    string nationality;
    int min, sec, csec;
    int total;
};
athelete num[1005];

bool compare(athelete a, athelete b) {
    if (a.total != b.total) {
        return a.total < b.total;
    }
    return a.name < b.name;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num[i].name >> num[i].nationality >> num[i].min >> num[i].sec >> num[i].csec;
        num[i].total = (num[i].min * 6000) + (num[i].sec * 100) + num[i].csec;
    }
    sort(num, num + n, compare);
    for(int i = 0; i < n; i++) {
        cout << (i + 1) << " " << num[i].name << " " << num[i].nationality << " " << num[i].min << ":";
        if (num[i].sec < 10) cout << "0";
        cout << num[i].sec << ".";
        if (num[i].csec < 10) cout << "0";
        cout << num[i].csec << "\n";
    }
    return 0;
}
