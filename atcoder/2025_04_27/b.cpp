#include <iostream>
#include <string>
using namespace std;

int main() {
    string T, U;
    cin >> T >> U;

    int Tlen = T.size();
    int Ulen = U.size();

    bool found = false;

    for (int i = 0; i <= Tlen - Ulen; ++i) {
        bool ok = true;
        for (int j = 0; j < Ulen; ++j) {
            if (T[i + j] != '?' && T[i + j] != U[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            found = true;
            break;
        }
    }

    cout << (found ? "Yes" : "No") << endl;
    return 0;
}
