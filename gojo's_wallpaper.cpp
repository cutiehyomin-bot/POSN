#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    cin.ignore();

    vector<pair<int, int>> floors(n);

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        int sum = 0;
        for (unsigned char c : line) {
            sum += static_cast<int>(c);
        }

        floors[i] = {sum, i + 1};
    }

    sort(floors.begin(), floors.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    for (int i = 0; i < n; i++) {
        cout << floors[i].second << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    cout << floors[0].first << "\n";

    return 0;
}