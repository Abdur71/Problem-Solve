#include<iostream>
#include <algorithm> // Include only the necessary header
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t > 0) {
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (k >= 2) {
            cout << "YES" << endl;
        } else {
            int copy[n];
            for (int i = 0; i < n; i++) {
                copy[i] = a[i];
            }
            sort(copy, copy + n);
            
            bool is_sorted = true;
            for (int i = 0; i < n; i++) {
                if (copy[i] != a[i]) {
                    is_sorted = false;
                    break;
                }
            }
            
            if (is_sorted) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        t--;
    }
    return 0;
}
