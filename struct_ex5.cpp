#include <bits/stdc++.h>
using namespace std;

struct Point {
    string name;
    int x, y;
    int urgency;
    int distance;

    bool operator<(const Point& other) const {
        if (urgency != other.urgency) return urgency > other.urgency;
        if (distance != other.distance) return distance < other.distance;
        return name < other.name;
    }
};
Point p[105];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].x >> p[i].y >> p[i].urgency;
        p[i].distance = abs(p[i].x) + abs(p[i].y);
    }
    sort(p, p + n);
    int total_distance = 0;
    int cur_x = 0, cur_y = 0;
    
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << p[i].name << " (" << p[i].x << "," << p[i].y << ") " << p[i].distance << "\n";
        total_distance += abs(cur_x - p[i].x) + abs(cur_y - p[i].y);
        cur_x = p[i].x;
        cur_y = p[i].y;
    }
    total_distance += abs(cur_x) + abs(cur_y) + 2;
    cout << "TOTAL DISTANCE: " << total_distance << "\n";
    
    return 0;
}
