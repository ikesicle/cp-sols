// (c) Ike Yang 2024
// 1921E - Eat the Chip (1600)
// 2024-01-26
// Time Taken: 30m

// Personal Boilerplate
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <climits>

#define repeat(x, vn) for (int vn = 0; vn < x; vn++)
#define debug(x) cout << x << "\n"

using namespace std;
int testcases;

void solve() {
    // Alice has the potential to win when the distance is odd. Bob has the potential to win when the distance is even.
    int wd, ht, ax, ay, bx, by;
    cin >> ht >> wd >> ay >> ax >> by >> bx;
    if (ay >= by) {
        debug("Draw");
        return;
    }
    int distance = by - ay;
    int movebase = distance / 2;
    if (distance % 2 == 1) { // Alice Playing to win
        if (ax == bx) debug("Alice");
        else if (ax < bx) {
            if (min(wd, ax + movebase + 1) >= min(wd, bx + movebase)) debug("Alice");
            else debug("Draw");
        } else {
            if (max(1, ax - movebase - 1) <= max(1, bx - movebase)) debug("Alice");
            else debug("Draw");
        }
    } else {
        if (ax == bx) debug("Bob");
        else if (ax < bx) {
            if (bx - movebase <= 1) debug("Bob");
            else debug("Draw");
        } else {
            if (bx + movebase >= wd) debug("Bob");
            else debug("Draw");
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> testcases;
    repeat(testcases, i) solve();
    return 0;
}