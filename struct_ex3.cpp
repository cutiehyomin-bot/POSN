#include <bits/stdc++.h>
using namespace std;
struct library{
    int id;
    string name;
    int stock;
};
library book[105];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> book[i].id >> book[i].name >> book[i].stock;
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        string act;
        int actid;
        cin >> act >> actid;

        int found = -1;
        for(int j=0; j<n; j++){
            if(actid == book[j].id){
                found = j;
                break;
            }
        }
        if(found = -1) cout << "NOT FOUND\n";
        else {
            if(act == "B") {
                if(book[found].stock > 0) {
                    book[found].stock--;
                    cout << "OK\n";
                } else {
                    cout << "OUT OF STOCK\n";
                }
            } 
            else if(act == "R") {
                book[found].stock++;
                cout << "OK\n";
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << book[i].id << " " << book[i].name << " " << book[i].stock << "\n";
    }
    
    return 0;
}
