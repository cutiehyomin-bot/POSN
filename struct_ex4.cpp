#include <bits/stdc++.h>
using namespace std;

struct club {
    string name;
    int start, end;
    bool operator<(const club& other) const {
        if (end != other.end) return end < other.end;
        if (start != other.start) return start < other.start;
        return name < other.name;
    }
}; 
club arr[1005];
string ans[1005];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i].name >> arr[i].start >> arr[i].end;
    }
    sort(arr, arr+n);
    int count = 0;
    int cur_end = 0;
    
    for(int i=0 ;i<n; i++){
        if(arr[i].start >= cur_end){ 
            ans[count] = arr[i].name;
            count++;          
            cur_end = arr[i].end;
        }
    }
    cout << count << "\n";
    for(int i=0; i<count; i++){
        cout << ans[i] << "\n";
    }
    
    return 0;
}

