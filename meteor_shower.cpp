#include <iostream>
using namespace std;

int l[500][500]; 

int main(){
    int m, n, k, x, y;
    cin >> m >> n >> k;
    
    int p = 0;
    int curr = 0;
    
    for (int i = 0 ; i < k ; i++){
        cin >> x >> y;
        l[x][y] += 1; 
    }
    
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j ++){
            curr = 0;
            if (i - 1 >= 0){
                curr += l[i-1][j];
            }
            if (i - 1 >= 0 && j + 1 < n){
                curr += l[i-1][j+1];
            }
            if (j + 1 < n){
                curr += l[i][j+1];
            }
            if (j + 1 < n && i + 1 < m){
                curr += l[i+1][j+1];
            }
            if (i + 1 < m){
                curr += l[i+1][j];
            }
            if (i + 1 < m && j - 1 >= 0){
                curr += l[i+1][j-1];
            }
            if (j - 1 >= 0){
                curr += l[i][j-1];
            }
            if (j - 1 >= 0 && i - 1 >= 0){
                curr += l[i - 1][j - 1];
            }

            if (curr > p){
                p = curr;
            }
        }
    } 

    cout << p << endl;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j ++){
            curr = 0;
            if (i - 1 >= 0){
                curr += l[i-1][j];
            }
            if (i - 1 >= 0 && j + 1 < n){
                curr += l[i-1][j+1];
            }
            if (j + 1 < n){
                curr += l[i][j+1];
            }
            if (j + 1 < n && i + 1 < m){
                curr += l[i+1][j+1];
            }
            if (i + 1 < m){
                curr += l[i+1][j];
            }
            if (i + 1 < m && j - 1 >= 0){
                curr += l[i+1][j-1];
            }
            if (j - 1 >= 0){
                curr += l[i][j-1];
            }
            if (j - 1 >= 0 && i - 1 >= 0){
                curr += l[i - 1][j - 1];
            }
            
            if (curr == p){
                cout << i << " " << j << "\n";
            }
        }
    }
    
    return 0;
}