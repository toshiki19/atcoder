#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    map<int, set<int>> graph;

    for (int i = 0; i < Q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int X, Y;
            cin >> X >> Y;
            if (!graph[X].count(M + 1)) {  // まだ全権限もってなければ
                graph[X].insert(Y);
            }
        } else if (type == 2) {
            int X;
            cin >> X;
            graph[X].clear();           // 古い権限消して
            graph[X].insert(M + 1);      // 特別な「全権限マーク」をつける
        } else if (type == 3) {
            int X, Y;
            cin >> X >> Y;
            if (graph[X].count(M + 1) || graph[X].count(Y)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
