#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> number_counts;
    int num;
    while (cin >> num) {
        number_counts[num]++;
    }
    for (auto const& [number, count] : number_counts) {
        cout << number << " -> " << count << "\n";
    }

    return 0;
}

