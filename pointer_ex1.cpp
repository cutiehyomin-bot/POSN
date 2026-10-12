#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    int *p;
    int max=0;
    char ans_char = ' ';
    
    getline(cin, n);

    for(int i=0; i<n.length(); i++){
        int count=0;
        if(!isalpha(n[i])) continue;
        for(p = (int*)n.c_str(); p < (int*)(n.c_str() + n.length()); p = (int*)((char*)p + 1)){
            char current_char = *(char*)p;
            
            if(tolower(current_char) == tolower(n[i])){
                count++;
            }
        }
        
        if(count > max){
            max = count;
            ans_char = tolower(n[i]);
        }
    }
    if(max > 0) {
        cout << ans_char << " " << max;
    }
    
    return 0;
}

