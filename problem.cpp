#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x == y) {
        cout << "No" << endl;
    }
     if (x > y) {
        cout << "No" << endl;
    }
     if (x < y) {
        cout << "Yes" << endl;
    }
    return 0;
}