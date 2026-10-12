#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> n = {-9, 2, -1, 5, -6};
    for (int i = 0; i < n.size(); i++) {
        n[i] = abs(n[i]);
    }
    sort(n.begin(), n.end());
    for (int i : n) {
        cout << i << " ";
    }

    return 0;
}