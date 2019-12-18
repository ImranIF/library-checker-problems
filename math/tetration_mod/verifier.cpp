#include <algorithm>
#include "testlib.h"

using namespace std;

int main() {
    registerValidation();

    int t = inf.readInt(1, 100);
    inf.readEoln();

    set<long long> trusted;
    for (int i = 0; i < t; i++) {
        long long A = inf.readLong(0LL, 1'000'000'000LL);
        inf.readSpace();
        inf.readLong(0LL, 1'000'000'000LL);
        inf.readSpace();
        long long M = inf.readLong(1LL, 1'000'000'000LL);
        inf.readEoln();
        ensure(A < M);
    }
    inf.readEof();
}