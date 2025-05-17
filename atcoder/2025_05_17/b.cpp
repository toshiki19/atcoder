#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long double log_display = 0; 
    long long display = 1;
    for (int i = 0; i < N; ++i) {
        log_display += log10(A[i]);

        if (log_display >= K) { 
            log_display = 0; 
            display = 1;
        } else {
            display *= A[i]; 
        }
    }

    cout << display << endl; 
    return 0;
}