#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, set<string>> act; 
    
    for(int i=0; i<n; i++){
        int x;
        string y;
        cin >> x >> y;
        act[x].insert(y); 
    }
    for(auto const& [id, activity_set] : act) {
        if(activity_set.size() >= 3) {
            cout << id << "\n";
        }
    }
    
    return 0;
}
