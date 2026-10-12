#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    const char *base = n.c_str();

    for (int len = n.length(); len >= 1; len--) {
        int i = 0;
        int j = len - 1;
        while (i < j && *(base + i) == *(base + j)) {
            i++;
            j--;
        }
        if (i >= j) {
            cout << len << "\n";
            return 0;
        }
    }

    return 0;
}
