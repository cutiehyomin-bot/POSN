#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    cout << *(arr + n - 1) << " ";
    for (int i = 0; i < n - 1; i++) {
        cout << *(arr + i) << (i == n - 2 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
