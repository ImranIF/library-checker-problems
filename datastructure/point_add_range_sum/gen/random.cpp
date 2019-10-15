#include "random.h"
#include <iostream>

using namespace std;

int main(int, char* argv[]) {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = gen.uniform(1, 500'000);
    int q = gen.uniform(1, 500'000);
    cout << n << " " << q << "\n";
    for (int i = 0; i < n; i++) {
        cout << gen.uniform(0, 1'000'000'000);
        if (i != n - 1) cout << " ";
    }
    cout << endl;
    for (int i = 0; i < q; i++) {
        int t = gen.uniform(0, 1);
        cout << t << " ";
        if (t == 0) {
            int p = gen.uniform(0, n - 1);
            int x = gen.uniform(0, 1'000'000'000);
            cout << p << " " << x << "\n";
        } else {
            auto p = gen.uniform_pair(0, n - 1);
            p.second++;
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}