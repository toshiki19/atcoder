#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int time1 = A * 60 + B;
    int time2 = C * 60 + D;

    if (time1 > time2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}