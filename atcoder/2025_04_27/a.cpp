#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    
    int sum = 0;  // 合計を入れる変数
    for (int i = 0; i < N; i += 2) {
        sum += a[i];  // 一個ずつ足していく
    }

    // 結果を出力
    cout << sum << endl;

    return 0;
}