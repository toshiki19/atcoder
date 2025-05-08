#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// グリッドを90度右回転させる関数
vector<string> rotate90(const vector<string>& grid) {
    int N = grid.size();
    vector<string> rotated(N, string(N, '.'));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            rotated[j][N - 1 - i] = grid[i][j];
    return rotated;
}

int main() {
    int N;
    cin >> N;

    vector<string> S(N), T(N);
    for (int i = 0; i < N; ++i) cin >> S[i];
    for (int i = 0; i < N; ++i) cin >> T[i];

    int min_operations = 1e9;

    vector<string> rotated = S;

    for (int rot = 0; rot < 4; ++rot) {
        // 不一致マス数をカウント
        int diff = 0;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                if (rotated[i][j] != T[i][j])
                    ++diff;

        int operations = rot + diff; // 回転 + 色変更
        min_operations = min(min_operations, operations);

        rotated = rotate90(rotated); // 次の回転へ
    }

    cout << min_operations << endl;
    return 0;
}
