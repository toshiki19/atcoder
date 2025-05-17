#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    int result = 0;

    for (int i = 0; i <= N - 4; ++i) {
        int peak = 0, valley = 0;

        
        if (P[i] >= P[i + 1]) continue;

        for (int j = i + 1; j < i + 3; ++j) {
            if (P[j - 1] < P[j] && P[j] > P[j + 1]) peak++;
            if (P[j - 1] > P[j] && P[j] < P[j + 1]) valley++;
        }

        if (peak == 1 && valley == 1) result++;
    }

    cout << result << endl;
    return 0;
}