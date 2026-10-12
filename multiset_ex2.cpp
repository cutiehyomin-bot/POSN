#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> numbers = {85,92,85,78,92,90,85};
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
        return 0;
}
