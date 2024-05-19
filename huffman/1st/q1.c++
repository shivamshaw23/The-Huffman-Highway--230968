#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int o, j, p;
    for (o = 0; o < t; o++) {
        for (p = 0; p < t; p++) {
            if (p % 2 == 0) {
                for (j = 0; j < (o + 1); j++) {
                    cout << (j + 1);
                }
                for (j = 0; j < 2 * (t - 1 - o); j++) {
                    cout << " ";
                }
            } else if (p % 2 == 1) {
                for (j = o; j >= 0; j--) {
                    cout << (j + 1);
                }
            }
        }
        cout << endl;
    }
    return 0;}