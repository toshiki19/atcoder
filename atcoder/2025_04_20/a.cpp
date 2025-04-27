#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Button {
    int T; // 出現時間
    int X; // 座標
};

bool canClearGame(int N, int D, const vector<Button>& buttons) {
    vector<int> order(N);
    for (int i = 0; i < N; ++i) order[i] = i;

    do {
        int currentTime = 0;
        int currentPosition = 0;
        bool valid = true;

        for (int i = 0; i < N; ++i) {
            int idx = order[i];
            int T = buttons[idx].T;
            int X = buttons[idx].X;

            // 座標0に戻る時間を考慮
            int timeToZero = abs(currentPosition - 0);
            currentTime += timeToZero;
            currentPosition = 0;

            // ボタンの座標に移動
            int timeToButton = abs(currentPosition - X);
            currentTime += timeToButton;
            currentPosition = X;

            // ボタンが押せるか確認
            if (currentTime < T || currentTime > T + D) {
                valid = false;
                break;
            }
        }

        if (valid) return true;
    } while (next_permutation(order.begin(), order.end()));

    return false;
}

int main() {
    int TESTCASES;
    cin >> TESTCASES;

    while (TESTCASES--) {
        int N, D;
        cin >> N >> D;

        vector<Button> buttons(N);
        for (int i = 0; i < N; ++i) {
            cin >> buttons[i].T >> buttons[i].X;
        }

        if (canClearGame(N, D, buttons)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}